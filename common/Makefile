CC = g++
INC = -I ../
CFLAGS =  -ansi -Wall -g -fPIC
OUT := ../lib

common: QuickSort.o Sort.o
	$(CC) -shared QuickSort.o Sort.o -o libcommon.so
	mkdir -p $(OUT)
	mv *.so $(OUT)
	mv *.o $(OUT)

QuickSort.o: QuickSort.cpp
	${CC} QuickSort.cpp ${CFLAGS} ${INC} -c

Sort.o: Sort.cpp
	${CC} Sort.cpp ${CFLAGS} ${INC} -c

clean:
	rm -rf $(OUT)
