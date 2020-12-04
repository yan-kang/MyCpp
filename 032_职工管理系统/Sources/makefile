objects=main.o workerManager.o employee.o manager.o boss.o
vpath %.h ../Headers
empMana:$(objects)
	g++ -o empMana $(objects)
main.o:workerManager.h
workerManager.o:workerManager.h
employee.o:employee.h
manager.o:manager.h
boss.o:boss.h
.PHONY:clean
clean:
	del empMana.exe $(objects) -rf