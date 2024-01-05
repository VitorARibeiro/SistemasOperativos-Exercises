shmLib.o : shmLib.c 
			gcc shmLib.c -o shmLib.o

shmClear: shmClear.c 
			gcc shmClear.c -o shmClear.o
			gcc shmClear.o shmLib.o -o shmClear
shmRead: shmRead.c 
			gcc shmRead.c -o shmRead.o
			gcc shmRead.o shmLib.o -o shmRead

shmWrite: shmWrite.c 
			gcc shmWrite.c -o shmWrite.o
			gcc shmWrite.o shmLib.o -o shmWrite