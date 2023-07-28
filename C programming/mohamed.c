# include <stdio.h>
# include <math.h>

int main (void)
{  
 printf("*********welcome to calcolator app****** \n"); 
 int first_num; 
 int second_num ; 
 int condition ;
 printf("please enter the first number ");
 scanf("%d",&first_num);
printf("please enter the second number ");
 scanf("%d",&second_num);
  
 
 printf("for add enter 1\n");
printf("for sub enter 2\n");
printf("for mul enter 3\n");
printf("for div enter 4\n");
printf("enter condition u want\n ");
scanf("%d",&condition);
if (condition==1)
{   
    int sum =first_num + second_num ;
    printf("the sum is = %d", sum);
}
else if (condition==2)
{
   int sub =first_num - second_num ;
    printf("the sub is = %d", sub); 
}
else if (condition==3)
{
   int mul =first_num * second_num ;
    printf("the mul is = %d", mul); 
}
else 
{
 float mul =first_num / second_num ;
    printf("the mul is = %f", mul);   

}
}
