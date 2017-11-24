matMultp: main.c
	gcc -pthread -o matMultp ./executers/Execute.c ./main.c ./matrices/MatrixSetup.c ./matrices/Utils.c ./files/FileHandler.c ./files/FileSetup.c -I.
