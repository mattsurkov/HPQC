#include <mpi.h>
#include <stdio.h>   
#include <stdlib.h>

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);  // Initialize MPI environment

    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank); // Rank of process

    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size); // Total number of processes

    printf("Hello from process %d of %d\n", world_rank, world_size);
    printf("Rank %d of %d on host %s\n", world_rank, world_size, getenv("HOSTNAME"));
    MPI_Finalize();  // Finalize MPI environment
}
