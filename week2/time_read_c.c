#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    FILE *file = fopen("data/output_c.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    clock_t start = clock();

    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    rewind(file);

    char *buffer = malloc(size + 1);
    fread(buffer, 1, size, file);

    clock_t end = clock();

    fclose(file);
    free(buffer);

    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("C read time: %f seconds\n", time_taken);

    return 0;
}
