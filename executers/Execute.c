#include "Execute.h"

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/time.h>

#include "../matrices/MatrixSetup.h"
#include "../matrices/Utils.h"
#include "../files/FileHandler.h"
#include "../files/FileSetup.h"

struct thread_data {
    int tid;
    int row, column;
};

void* calculate_by_row(void* tdata) {

    struct thread_data *my_data;
    my_data = (struct thread_data *) tdata;
    // int tid = my_data->tid;
    int row = my_data->row;
    // int column = my_data->column;

    int j, k;
    for(j = 0; j < column_2; j++) {
        for(k = 0; k < column_1; k++) {
            matrix_output_1[row][j] += matrix_1[row][k] * matrix_2[k][j];
        }
    }

    // printf("%d %d %d FINISHED\n", tid, row, column);
    pthread_exit(NULL);

}

void* calculate_by_element(void* tdata) {

    struct thread_data *my_data;
    my_data = (struct thread_data *) tdata;
    // int tid = my_data->tid;
    int row = my_data->row;
    int column = my_data->column;

    int k;
    for(k = 0; k < column_1; k++) {
        matrix_output_2[row][column] += matrix_1[row][k] * matrix_2[k][column];
    }

    // printf("%d %d %d FINISHED\n", tid, row, column);
    pthread_exit(NULL);
}

void method_1() {

    int i, rc;
    pthread_t threads_by_row[row_1];

    for(i = 0; i < row_1; i++) {
        struct thread_data *tdata = malloc(sizeof(struct thread_data));
        tdata->tid = i;
        tdata->row = i;
        tdata->column = -1;
        rc = pthread_create(&threads_by_row[i], NULL, calculate_by_row, (void *)tdata);
        if(rc) {
            printf("ERROR(%d): no more thread could be created", i);
            exit(-1);
        }
    }

    for(i = 0; i < row_1; i++) {
        pthread_join(threads_by_row[i], NULL);
    }

}

void method_2() {

    int i, j, rc;
    pthread_t threads_by_element[row_1 * column_2];

    for(i = 0; i < row_1; i++) {
        for(j = 0; j < column_2; j++) {
            struct thread_data *tdata = malloc(sizeof(struct thread_data));
            tdata->tid = i*column_2 + j;
            tdata->row = i;
            tdata->column = j;
            rc = pthread_create(&threads_by_element[i*column_2 + j], NULL, calculate_by_element, (void *)tdata);
            if(rc) {
                printf("ERROR(%d): no more thread could be created", i);
                exit(-1);
            }
        }
    }

    for(i = 0; i < row_1; i++) {
        for(j = 0; j < column_2; j++) {
            pthread_join(threads_by_element[i*column_2 + j], NULL);
        }
    }

}

void run_method_1() {

    struct timeval stop, start;
    gettimeofday(&start, NULL);

    method_1();

    gettimeofday(&stop, NULL);
    printf("METHOD 1: Seconds taken in %lu\n", stop.tv_sec - start.tv_sec);
    printf("METHOD 1: Microseconds taken: %lu\n", stop.tv_usec - start.tv_usec);
    printf("METHOD 1: Number of threads is: %d\n\n", row_1);

    // print_matrix(matrix_output_1, row_1, column_2);
    write_matrix(get_matrix_output_1_file_name(), matrix_output_1, row_1, column_2);
}

void run_method_2() {

    struct timeval stop, start;
    gettimeofday(&start, NULL);

    method_2();

    gettimeofday(&stop, NULL);
    printf("METHOD 2: Seconds taken %lu\n", stop.tv_sec - start.tv_sec);
    printf("METHOD 2: Microseconds taken: %lu\n", stop.tv_usec - start.tv_usec);
    printf("METHOD 2: Number of threads is: %d\n", row_1*column_2);

    // print_matrix(matrix_output_2, row_1, column_2);
    write_matrix(get_matrix_output_2_file_name(), matrix_output_2, row_1, column_2);

}
