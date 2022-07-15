#include <stdio.h>


int main(void){
    
    int startsize, endsize, died, born;
    int years = 0;
    
    do{
        printf("Start size: ");
        scanf("%d",&startsize);
    }while(startsize < 9);
    int finalpopulation = startsize;
    do{
        printf("End size: ");
        scanf("%d",&endsize);
        
    }while(endsize < startsize);

    while(finalpopulation < endsize){
          born = finalpopulation / 3;
          died = finalpopulation / 4;
          finalpopulation = (finalpopulation + born) - died;
          years++;
    }

    printf("Years: %d\n",years);


}