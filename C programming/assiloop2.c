#include<stdio.h>

int main(void)
{
int number ;
int i ;
int j ; 
int k ;
printf("please enter number of lines and stars");
 scanf("%d",&number); 
 for (i=0;i<number;++i)
 {
     
     for (k = 0; k <(i); ++k) 
      {
       printf(" ");  
      }
    for (j = i*2-1; j <(number); ++j) 
    {
       printf("*");  
    }

    printf("\n"); 
 }
  

}