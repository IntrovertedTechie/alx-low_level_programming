#include <stdio.h>
#include <stdlib.h>
#include<time.h>
/*more headers can go in here */
/* betty style doc for function main can go below */
int main(void)
{
int alp;
for(alp=97;alp<=122;alp++)
{
if(alp !=101 && alp !=113)
{
putchar(alp);
}
}
putchar(10);
return(0);
}
