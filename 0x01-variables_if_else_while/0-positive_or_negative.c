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

    if(n > 0) 

    printf("%d is positive \n",n);

    else if(n <0)

    printf("%d is negative \n",n);
   
    else

    printf("%d is negative \n",n);

    return (0);
}
