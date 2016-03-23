proyecto2:	main.o dinosaurio.o
	g++ dinosaurio.o main.o -o proyecto2
main.o:	main.cpp dinosaurio.h
	g++ -c main.cpp 
dinosaurio.o:	dinosaurio.cpp dinosaurio.h
	g++ -c dinosaurio.cpp
