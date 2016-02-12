main:main.o
	gcc -o main main.o -lstdc++ -lcurl
main.o:main.cpp
	gcc -c main.cpp
clean:
	rm *.o

