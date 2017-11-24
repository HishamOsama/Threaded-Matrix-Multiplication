#ifndef FILEHANDLER_H
#define FILEHANDLER_H

/**
 * This function is responsible for writing
 * the values of a matrix in an output file
 *
 * @param path File path to write matix
 * @param matrix Matrix to be written
 * @param row Number of rows of matrix
 * @param column Number of columns of matrix
 */
void write_matrix(char* path, int** matrix, int row, int column);

#endif // FILEHANDLER_H
