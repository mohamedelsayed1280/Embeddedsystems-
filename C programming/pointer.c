#include <stdio.h>


int main ()
{
int num ; 
int *prt =&num ;
num =5 ; 
printf("%d\n",num); 
printf("%d\n",&num);
*prt = 6 ;
printf("%d\n",*prt); 
printf("%d\n",prt); 
printf("%d",&prt); 

    return 0;
}