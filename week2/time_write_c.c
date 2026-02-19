#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Usage: ./time_write_c [NUM]\n");
        return 1;
    }

    int n = atoi(argv[1]);

    FILE *file = fopen("data/output_c.txt", "w");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    clock_t start = clock();

    for (int i = 0; i < n; i++) {
        fprintf(file, "%d, ", i);
    }

    clock_t end = clock();

    fclose(file);

    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("C write time: %f seconds\n", time_taken);

    return 0;
}
