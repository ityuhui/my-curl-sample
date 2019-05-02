mycurlsample:main.o
	gcc -o mycurlsample main.o -lstdc++ -lcurl
main.o:main.cpp
	gcc -c main.cpp
clean:
	rm *.o

