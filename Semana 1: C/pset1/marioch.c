#include <stdio.h>

int main(){

    int tamanho, aux;
    do{
        printf("Digite o tamanho da pirâmide: ");
        scanf("%d",&tamanho);
    }
    while(tamanho < 1 || tamanho > 8 );
    aux = tamanho;

    for(int x = 0; x < tamanho; x++){
        
        for(int z = 0; z < aux-1; z++ ){
                printf(" ");
            }

        for(int y = 0; y < x+1; y++){
            printf("#");
        }
        printf(" ");
        for(int y = 0; y < x+1; y++){
            printf("#");
        }
        aux--;    
        printf("\n");
    }

}