#ifndef EXECUTE_H
#define EXECUTE_H

/**
 * This function is responsible for calculating
 * matrix multIplication row by row
 *
 * @param tdata Structure containg the value
 * of the current row of interest
 */
void* calculate_by_row(void* tdata);

/**
 * This function is responsible for calculating
 * matrix multIplication element by element
 *
 * @param tdata Structure containg the value
 * of the current row abd column of interest
 */
void* calculate_by_element(void* tdata);

/**
 * This function is responsible for calling
 * the method interested in calculating matrix
 * multplication row by row
 */
void method_1();

/**
 * This function is responsible for calling
 * the method interested in calculating matrix
 * multpilication element by element
 */
void method_2();

/**
 * This function is considered the interface
 * for calling the method interseted in calculating
 * matrix multiplication row by row showing
 * simple report for the user about execution
 */
void run_method_1();

/**
 * This function is considered the interface
 * for calling the method interseted in calculating
 * matrix multiplication element by element showing
 * simple report for the user about execution
 */
void run_method_2();

#endif // EXECUTE_H
