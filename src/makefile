CFLAGS = -Wall

all: fileio.o utils.o proj_refactor_file.o
	g++ $(CFLAGS) -o myexe fileio.o utils.o proj_refactor_file.o

#rebuild object file if fileio.cpp, or fileio.h or constants.h changes
#compile the .cpp file to an object file (-c)
fileio.o: ../fileio/fileio.cpp ../includes/fileio.h ../includes/constants.h
	g++ $(CFLAGS) -c ../fileio/fileio.cpp
	
utils.o: ../includes/utils.h
	g++ $(CFLAGS) -c ../utils/utils.cpp
	
proj_refactor_file.o: ../src/proj_refactor_file.cpp	
	g++ $(CFLAGS) -c ../src/proj_refactor_file.cpp

clean:
	rm -f *.o myexe