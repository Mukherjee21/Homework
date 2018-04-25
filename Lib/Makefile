output: main.o operation.o
	g++ main.o operation.o -o output

main.o: main.cpp
	g++ -c main.cpp

operation.o: operation.cpp operation.h add.o sub.o mul.o div.o
	g++ -c operation.cpp 

add.o: add.cpp
	g++ -c add.cpp

sub.o: sub.cpp
	g++ -c sub.cpp

div.o: div.cpp
	g++ -c div.cpp

mul.o: mul.cpp
	g++ -c mul.cpp


clean:
	rm *.o output
