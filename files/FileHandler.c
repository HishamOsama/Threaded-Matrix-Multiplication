#include "FileHandler.h"

#include <stdio.h>

void write_matrix(char* path, int** matrix, int row, int column) {

    FILE* fptr = fopen(path, "w");

    fprintf(fptr, "row=%d col=%d\n", row, column);

    int i, j;
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            fprintf(fptr, "%d\t", matrix[i][j]);
        }
        fprintf(fptr, "\n");
    }
}
