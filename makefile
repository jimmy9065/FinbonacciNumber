CC = g++
target = main.o Fibonacci.o

ALL: $(target)
	$(CC) $(target) -o main

main.o: main.cpp Fibonacci.h
	$(CC) -c main.cpp

Fibonacii.o: Fibonacci.cpp Fibonacci.h
	$(CC) -c Fibonacci.cpp

.PHONY: clean
clean:
	rm $(target)
	rm main
