proyecto2:	main.o dinosaurio.o t_rex.o
	g++ dinosaurio.o  t_rex.o main.o -o proyecto2
main.o:	main.cpp dinosaurio.h t_rex.h
	g++ -c main.cpp 
dinosaurio.o:	dinosaurio.cpp dinosaurio.h
	g++ -c dinosaurio.cpp
t_rex.o:	t_rex.cpp t_rex.h dinosaurio.h
	g++ -c t_rex.cpp
