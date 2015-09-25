
all: ./src/main.cpp 
	g++ ./src/main.cpp -I ./includes -L./lib/ll.o -o ./bin/programInterviewsExposed.exe 

debug: ./src/main.cpp ll 
	g++ -g ./src/main.cpp -I ./includes -L./lib/ll.o -o ./bin/debug.exe 

ll:
	g++ -c ./includes/ll.hpp -o ./lib/ll.o
