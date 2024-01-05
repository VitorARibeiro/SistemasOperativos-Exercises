#include "shmLib.h"



int main(){
   
    char* block = AtachMemoryBlock(FILENAME, SIZE);

    while(true){
        if(strlen(block)> 0){
            printf("Reading : %s \n", block);
            if(strcmp(block,"quit") == 0)
                break;
            block[0] = 0;
        }


    }

    //deslinkar bloco
       

        if(shmdt(block) == ERROR){
                perror("Erro ao Deslinkar bloco de memoria\n");
            }

    return 0;
}