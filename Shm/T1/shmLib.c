#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#include "shmLib.h"


int GetMemoryBlock(char* filename, int size){

     //primeiro devemos obter a key
        key_t key;
        //gerar key a partir do ficheiro
        if (key = ftok (filename,0) == ERROR){
            return ERROR;
        }

        return shmget(key,size, 0644| IPC_CREAT); // vai retornar um id de um bloco
}

char* AtachMemoryBlock(char* filename, int size){

    int shared_block_id = GetMemoryBlock(filename, size);

    if(shared_block_id == ERROR){
        return NULL;
    }

    char* result = shmat(shared_block_id, NULL, 0);
    if(result == (char*)ERROR){
        return NULL;
    }
    return result;
}

bool DestroyMemoryBlock(int shared_block_id){

     if(shmctl(shared_block_id,IPC_RMID,NULL) == ERROR){
        return ERROR;
    }
    
    return 1;
}

int main(){
    return 0;
}
