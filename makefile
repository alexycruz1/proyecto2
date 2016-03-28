proyecto2:	main.o dinosaurio.o t_rex.o	apatosaurio.o triceratops.o iguanodonte.o pentaceratops.o ankylosaurus.o
	g++ dinosaurio.o  t_rex.o apatosaurio.o triceratops.o iguanodonte.o pentaceratops.o ankylosaurus.o main.o -o proyecto2

main.o:	main.cpp dinosaurio.h t_rex.h apatosaurio.h triceratops.h iguanodonte.h pentaceratops.h ankylosaurus.h
	g++ -c main.cpp

dinosaurio.o:	dinosaurio.cpp dinosaurio.h
	g++ -c dinosaurio.cpp

t_rex.o:	t_rex.cpp t_rex.h dinosaurio.h
	g++ -c t_rex.cpp

apatosaurio.o:	apatosaurio.cpp apatosaurio.h dinosaurio.h
	g++ -c apatosaurio.cpp	

triceratops.o:	triceratops.cpp triceratops.h dinosaurio.h
	g++ -c triceratops.cpp

iguanodonte.o:	iguanodonte.cpp iguanodonte.h dinosaurio.h
	g++ -c iguanodonte.cpp	

pentaceratops.o:	pentaceratops.cpp pentaceratops.h dinosaurio.h
	g++ -c pentaceratops.cpp	

ankylosaurus.o:	ankylosaurus.cpp ankylosaurus.h dinosaurio.h
	g++ -c ankylosaurus.cpp	