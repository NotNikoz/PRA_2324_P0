all: BrazoRobotico

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h 
	g++ -c BrazoRobotico.cpp

main.o: main.cpp BrazoRobotico.h
	g++ -c main.cpp

BrazoRobotico: BrazoRobotico.o main.o
	g++ -o BrazoRobotico BrazoRobotico.o main.o

clean:
	rm -f *.o 

test: all
	./BrazoRobotico

