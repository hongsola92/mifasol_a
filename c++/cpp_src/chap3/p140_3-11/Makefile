main : Calculator.o Adder.o main.o
	g++ Calculator.o Adder.o main.o -o main

Calculator.o : Calculator.cpp
	g++ -c Calculator.cpp

Adder.o : Adder.cpp
	g++ -c Adder.cpp

main.o : main.cpp
	g++ -c main.cpp

clean : 
	rm *.o main