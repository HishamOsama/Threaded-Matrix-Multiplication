#ifndef UTILS_H
#define UTILS_H

/**
 * This function is responsible for setting
 * the file of the matrix to read it from
 *
 * @param path Path of the matrix
 */
void set_matrix_file(char* path);

/**
 * This function is responsible for setting
 * the number of rows of the matrix
 *
 * @param length Number of rows of matrix
 */
void set_row_length(int length);

/**
 * This function is responsible for setting
 * the number of columns of the matrix
 *
 * @param length Number of columns of matrix
 */
void set_column_length(int length) ;

/**
 * This function is responsible for getting
 * the number of rows of the matrix
 *
 * @return number of rows of the matrix
 */
int get_row_length();

/**
 * This function is responsible for getting
 * the number of columns of the matrix
 *
 * @return number of columns of the matrix
 */
int get_column_length();


/**
 * This function is responsible for setting
 * the rows and columns of the matrix
 */
void set_metrics();

/**
 * This function is responsible for setting
 * the values of the matrix
 *
 * @param matrix Matrix to be filled
 */
void set_matrix(int** matrix);

/**
 * This function is responsible for allocating
 * memory for matrix
 *
 * @param matrix Matrix to be allocated
 * @param row Number of rows of matrix
 * @param column Number of columns of matrix
 */
void set_matrix_dimensions(int*** matrix, int row, int column);

/**
 * This function is responsible for clearing
 * the contents of matrix
 *
 * @param matrix Matrix to be allocated
 * @param row Number of rows of matrix
 * @param column Number of columns of matrix
 */
void clear_matrix(int** matrix, int row, int column);

/**
  * This function is responsible for printing
 * the values of matrix
 *
 * @param matrix Matrix to be allocated
 * @param row Number of rows of matrix
 * @param column Number of columns of matrix
 */
void print_matrix(int** matrix, int row, int column);


#endif // UTILS_H
