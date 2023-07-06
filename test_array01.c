#include<stdio.h>



void main(){
    int scoreA;

    int scoreB[5];
    
    float salaryIoTA;

    float salaryIoTB[100];

    char nameA;

    char nameB[50];

    scoreA = 100;
    printf("%d\n",scoreA);
    
    scoreB[1] = 200;
    scoreB[4] = 400;

     printf("%d\n",scoreB[1]);
      printf("%d\n",scoreB[4]);

      salaryIoTB[29] = 10000.25;
       salaryIoTB[99] =  salaryIoTB[29]+scoreB[1];
       printf("%.2f",salaryIoTB[99]);
} 