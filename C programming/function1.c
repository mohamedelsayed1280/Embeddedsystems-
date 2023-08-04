#include<stdio.h> 

int Factorial (int n );
int main (void)
{

int number ; 
printf("enter the number please ="); 
scanf("%d",&number); 
int x = Factorial(number) ;
printf("%d",x) ;
return 0; 
}


int Factorial (int n)
{  int z=1 ;
   int y=n ;
    while (y>0)
 {
    n=n*z ;
    z=y-1 ;
    y--;
 }

return  n ;
}