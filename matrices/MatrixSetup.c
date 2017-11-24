#include "MatrixSetup.h"

#include <stdio.h>
#include <stdlib.h>

#include "../files/FileSetup.h"
#include "Utils.h"

int row_1, row_2, column_1, column_2;
int **matrix_1, **matrix_2, **matrix_output_1, **matrix_output_2;

void set_up_matrices() {
    set_up_matrix_1();
    set_up_matrix_2();
    set_up_matrix_output();
}

void set_up_matrix_1() {
    set_matrix_file(get_matrix_1_file_name());
    set_metrics();
    row_1 = get_row_length();
    column_1 = get_column_length();
    set_matrix_dimensions(&matrix_1, row_1, column_1);
    set_matrix(matrix_1);
}

void set_up_matrix_2() {
     set_matrix_file(get_matrix_2_file_name());
     set_metrics();
     row_2 = get_row_length();
     column_2 = get_column_length();
     set_matrix_dimensions(&matrix_2, row_2, column_2);
     set_matrix(matrix_2);
}

void set_up_matrix_output() {
    set_matrix_dimensions(&matrix_output_1, row_1, column_2);
    set_matrix_dimensions(&matrix_output_2, row_1, column_2);
    clear_matrix(matrix_output_1, row_1, column_2);
    clear_matrix(matrix_output_2, row_1, column_2);
}

