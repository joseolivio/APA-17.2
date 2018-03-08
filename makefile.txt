all: InsertionSort.o

InsertionSort.o: InsertionSort.cpp
	@g++ -o InsertionSort.o InsertionSort.cpp