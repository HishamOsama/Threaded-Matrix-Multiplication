#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#include "files/FileSetup.h"
#include "matrices/MatrixSetup.h"
#include "matrices/Utils.h"
#include "executers/Execute.h"

int main(int argc, char* argv[])
{
    if(argc > 1) {
       set_matrices_file_names(argv);
    } else {
        char* file_names[] = {
            "file_names",
            "a",
            "b",
            "c"
        };
        set_matrices_file_names(file_names);
    }

    set_up_matrices();

    run_method_1();

    run_method_2();

    return 0;
}
