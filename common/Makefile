CC = g++
INC = -I ../
CFLAGS = -O3 -ansi -Wall -g
OUT := ../lib

common.o: QuickSort.cpp
	${CC} QuickSort.cpp ${CFLAGS} ${INC} -c
	$(CC) -shared QuickSort.o -o libcommon.so
	mkdir -p $(OUT)
	mv *.so $(OUT)

clean:
	rm -rf $(OUT)
