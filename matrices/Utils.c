#include "Utils.h"

#include <stdio.h>
#include <stdlib.h>

FILE* fptr;
int row_length;
int column_length;

void set_matrix_file(char* path) {
    fptr = fopen(path, "r");
}

void set_row_length(int length) {
    row_length = length;
}

void set_column_length(int length) {
    column_length = length;
}

int get_row_length() {
    return row_length;
}

int get_column_length() {
    return column_length;
}

void set_metrics() {

    int row_length, column_length;

    fscanf(fptr, "row=%d col=%d", &row_length, &column_length);

    set_row_length(row_length);
    set_column_length(column_length);
}

void set_matrix(int** matrix) {

    int i, j;

    for(i = 0; i < row_length; i++) {
        for(j = 0; j < column_length; j++) {
            fscanf(fptr, "%d", &matrix[i][j]);
        }
    }
}

void set_matrix_dimensions(int*** matrix, int row, int column) {

     int i;
     *matrix = malloc(row * sizeof(int *));
     for (i = 0; i < row; i++) {
        (*matrix)[i] = malloc(column * sizeof(int));
     }

}

void clear_matrix(int** matrix, int row, int column) {

    int i, j;

    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            matrix[i][j] = 0;
        }
    }
}

void print_matrix(int** matrix, int row, int column) {

    int i,j;

    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

}
