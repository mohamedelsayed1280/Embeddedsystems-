#include <stdio.h> 
#include <string.h>
struct student 
{
    char name[20]; 
    int age ;
    int year ; 
    float grade  ; 

} ;
int main (void)
{ 
    struct student student1 ; 
    strcpy(student1.name, "ahmed");
  // student1.name[0] = "ahmed";
    student1.age = 19 ;
    student1.year =2023 ;
    student1.grade= 90 ;
    printf("%s\n",student1.name);
printf("%d\n",student1.age);
printf("%d\n",student1.year);
printf("%f\n",student1.grade);


    return 0 ;

}