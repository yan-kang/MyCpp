objects=main.o workerManager.o employee.o
vpath %.h ../Headers
empMana:$(objects)
	g++ -o empMana $(objects)
main.o:empMana.h
workerManager.o:workerManager.h
employee.o:employee.h
.PHONY:clean
clean:
	del empMana.exe $(objects) -rf