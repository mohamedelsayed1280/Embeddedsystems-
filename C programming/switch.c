# include <stdio.h>
# include <math.h>

int main (void)
{  
 printf("*********welcome to calcolator app****** \n"); 
 float first_num; 
 float second_num ; 
 int condition ;
 printf("please enter the first number ");
 scanf("%f",&first_num);
printf("please enter the second number ");
 scanf("%f",&second_num);
  
 
 printf("for add enter 1\n");
printf("for sub enter 2\n");
printf("for mul enter 3\n");
printf("for div enter 4\n");
printf("enter condition u want\n ");
scanf("%d",&condition);
switch (condition)
{
    case 1 : 
    printf("%f",first_num+second_num);
    break ; 
    case 2 : 
    printf("%f",first_num- second_num);
    break ; 
    case 3 : 
    printf("%f",first_num * second_num);
    break ; 
    case 4 : 
    printf("%f",first_num / second_num);
    break ; 
}
    return 0 ;
}