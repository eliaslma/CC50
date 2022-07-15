#include <stdio.h>

int check(int sum, int digitos){
    if(sum % 10 == 0){
        if(digitos == 16){
            printf("VISA\n");
        }
    }
    else{
        printf("INVALID\n");
    }

}

int main(){
    long numero;
    int digitos = 0;
    int sum = 0;
    printf("Número: ");
    scanf("%ld",&numero);
    
    long workingCc = numero;
    long workingCc2 = numero;
    workingCc = workingCc / 10;
    // soma os números que são multiplicados por 2 
    while(workingCc > 0){
        digitos++;
        int lastdigit = workingCc % 10;
        workingCc = workingCc / 100;

        if(lastdigit > 0 && lastdigit < 5){
            sum = sum + (lastdigit * 2);
        }
        else if(lastdigit >= 5){
            lastdigit = lastdigit * 2;
            int ldigit = lastdigit % 10;
            int fdigit = (lastdigit / 10) % 10;
            sum = sum + (fdigit + ldigit);
        }
    }
    
    // soma os números que estão fora da multiplacação a soma total
    while(workingCc2 > 0){
        digitos++;
        int ultimo = workingCc2 % 10;
        workingCc2 = workingCc2 / 100;
        sum = sum + ultimo;
    }
    check(sum,digitos);
}