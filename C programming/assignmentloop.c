#include<stdio.h>

int main(void)
{
int number ;
int i ;
int j ; 
int k;

printf("please enter number of lines and stars");
 scanf("%d",&number); 
 for (i=1;i<=number;++i)
 {
     
     for (k = 0; k <( number-i); ++k) 
      {
       printf(" ");  
      }
    for (j = 0; j <(i*2-1); ++j) 
    {
       printf("*");  
    }
    printf("\n"); 
    
    

 }


}