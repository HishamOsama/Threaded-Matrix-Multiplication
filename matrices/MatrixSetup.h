#ifndef MATRIXSETUP_H
#define MATRIXSETUP_H

extern int row_1, row_2, column_1, column_2;
extern int **matrix_1, **matrix_2, **matrix_output_1, **matrix_output_2;

/**
 * This function is responsible for setting up
 * the values of input and output matrices
 */
void set_up_matrices();

/**
 * This function is responsible for setting up
 * the values of the first input matrix
 */
void set_up_matrix_1();

/**
 * This function is responsible for setting up
 * the values of the second input matrix
 */
void set_up_matrix_2();

/**
 * This function is responsible for setting up
 * the values of the output matrices
 */
void set_up_matrix_output();

#endif // MATRIXSETUP_H
