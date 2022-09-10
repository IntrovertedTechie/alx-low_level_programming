/*
 * Doc :Zero,Positive Negative number indicator
 * Author :Adio Adebayo
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints a random number
 * and indicates 
 * whether it is zero
 * positive or negative
 */

int main(void)
{
     int n;
     
     srand(time(0));
     
     n=rand()-RAND_MAX / 2;

    if(n > 0){ 

    printf("%d if the number is greater than 0:is positive \n",n);
    printf("%d is positive \n",n); 
    }else if(n <0){

    printf("%d if the number is 0:  is negative \n",n);
    printf("%d is negative\n",n);  
    }else{

    printf("%d if the number is 0: is zero \n",n);
    printf("%d is zero\n",n);
    }
    return (0);
}
