all: main.o Gate.o Input.o Output.o AND.o NAND.o NOR.o NOT.o OR.o XNOR.o XOR.o
	g++ -o main main.o Gate.o Input.o Output.o AND.o NAND.o NOR.o NOT.o OR.o XNOR.o XOR.o

clean:
	rm *.o main

