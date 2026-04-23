#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);  // Start MPI

    int world_rank, world_size;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

    int N = 10;  // size of the vector
    int *vector = NULL;

    if (world_rank == 0) {
        // Only root initializes the vector
        vector = (int*)malloc(N * sizeof(int));
        for (int i = 0; i < N; i++) {
            vector[i] = i + 1;  // fill with 1,2,3,...,N
        }
    }

    // Determine chunk size for each process
    int chunk_size = N / world_size;
    int remainder = N % world_size; // extra elements if N not divisible
    int start = world_rank * chunk_size + (world_rank < remainder ? world_rank : remainder);
    int end = start + chunk_size + (world_rank < remainder ? 1 : 0);

    int local_sum = 0;

    // Compute local sum
    for (int i = start; i < end; i++) {
        local_sum += (world_rank == 0 ? vector[i] : 0); // Only root has vector initially
    }

    // If root, distribute vector elements to all processes
    if (world_rank != 0) {
        MPI_Scatter(vector, chunk_size, MPI_INT, &local_sum, chunk_size, MPI_INT, 0, MPI_COMM_WORLD);
    }

    int total_sum = 0;

    // Parallel reduction: sum all local_sums into total_sum at root
    MPI_Reduce(&local_sum, &total_sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);

    if (world_rank == 0) {
        printf("Total sum of vector elements = %d\n", total_sum);
        free(vector);
    }

    MPI_Finalize();  // End MPI
    return 0;
}
