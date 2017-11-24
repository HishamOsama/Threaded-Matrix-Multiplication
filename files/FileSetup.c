#include "FileSetup.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* matrix_1_file_name;
char* matrix_2_file_name;
char* matrix_output_1_file_name;
char* matrix_output_2_file_name;

void set_matrices_file_names(char* file_names[]) {
    set_matrix_1_file_name(file_names[1]);
    set_matrix_2_file_name(file_names[2]);
    set_matrix_output_1_file_name(file_names[3]);
    set_matrix_output_2_file_name(file_names[3]);
}

void set_matrix_1_file_name(char* file_name) {
    matrix_1_file_name = file_name;
}

void set_matrix_2_file_name(char* file_name) {
    matrix_2_file_name = file_name;
}

void set_matrix_output_1_file_name(char* file_name) {
    int length = strlen(file_name) + 2;
    matrix_output_1_file_name = malloc(length);
    strcpy(matrix_output_1_file_name,file_name);
    strcat(matrix_output_1_file_name, "_1");
}

void set_matrix_output_2_file_name(char* file_name) {
    int length = strlen(file_name) + 2;
    matrix_output_2_file_name = malloc(length);
    strcpy(matrix_output_2_file_name,file_name);
    strcat(matrix_output_2_file_name, "_2");
}

char* get_matrix_1_file_name() {
    return matrix_1_file_name;
}

char* get_matrix_2_file_name() {
    return matrix_2_file_name;
}

char* get_matrix_output_1_file_name() {
    return matrix_output_1_file_name;
}

char* get_matrix_output_2_file_name() {
    return matrix_output_2_file_name;
}
