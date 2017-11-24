#ifndef FILESETUP_H
#define FILESETUP_H

/**
 * This function is responsible for setting
 * the file names of matrices
 *
 * @param file_names Array containing the
 * names of file names of matrices
 */
void set_matrices_file_names(char* file_names[]);

/**
 * This function is responsible for setting
 * the file name of first input matrix
 *
 * @param file_names File name of first input matrix
 */
void set_matrix_1_file_name(char* file_name);

/**
 * This function is responsible for setting
 * the file name of second input matrix
 *
 * @param file_names File name of second input matrix
 */
void set_matrix_2_file_name(char* file_name);

/**
 * This function is responsible for setting
 * the file name of first output matrix
 *
 * @param file_names File name of first output matrix
 */
void set_matrix_output_1_file_name(char* file_name);

/**
 * This function is responsible for setting
 * the file name of second output matrix
 *
 * @param file_names File name of second output matrix
 */
void set_matrix_output_2_file_name(char* file_name);

/**
 * This function is responsible for returing
 * the file name of first output matrix
 *
 * @return file name of first input matrix
 */
char* get_matrix_1_file_name();

/**
 * This function is responsible for returing
 * the file name of second input matrix
 *
 * @return file name of second input matrix
 */
char* get_matrix_2_file_name();

/**
 * This function is responsible for returing
 * the file name of first output matrix
 *
 * @return file name of first output matrix
 */
char* get_matrix_output_1_file_name();

/**
 * This function is responsible for returing
 * the file name of second output matrix
 *
 * @return file name of second output matrix
 */
char* get_matrix_output_2_file_name();

#endif // FILESETUP_H
