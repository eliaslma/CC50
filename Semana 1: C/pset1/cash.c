#include <stdio.h>
#include <math.h>

int get_moedas(){

    int aux = 0;
    float valor;
    
    while(valor < 0){
        printf("\ndigite o valor do troco: ");
        scanf("%f",&valor);
    }
    if(valor == 0.25){
        return 1;
    }

    while(valor > 0.25){
        valor -= 0.25;
        aux++;
    }

    while(valor >= 0.10){
        valor -= 0.10;
        aux++;
    }
 
    while(valor >= 0.05){
        valor -= 0.05;
        aux++;
    }

    while(valor >= round(0.01)){
        valor -= 0.01;
        aux++;
    }

    return aux;
}

int main(){

    int moedas = get_moedas();
    printf("\n%d moedas\n", moedas);
}