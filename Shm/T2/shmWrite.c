#include "shmLib.h"




int main(int argc, char* argv[]){

   char* block = AtachMemoryBlock(FILENAME, SIZE);

    //vamos escrever uma mensagem no bloco

    for(int i =0 ;i<atoi(argv[2]);i++){

        printf("Writing : %s \n", argv[1]);
        strncpy(block, argv[1] , SIZE);
    }
    

    //deslinkar bloco
       

        if(shmdt(block) == ERROR){
                perror("Erro ao Deslinkar bloco de memoria\n");
            }

    return 0;
}