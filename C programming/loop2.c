#include <stdio.h>
/*name ; mohamed elsayed 
date ; 29\7 
object ; loop   
*/
int main (void)
{ /*creat variable detect number of repet*/
int number_repet  ;
int i ; 
int x ;
/*ask customer enter number of repet*/
printf("enter number want to repet "); 
/*loop that repet the shap*/
scanf("%d",&number_repet); 

for ( x =0 ; x<number_repet ; ++x)
{
    for ( i =0 ; i<(number_repet-1) ; ++i)
    {

printf("*");
    }
    printf("*\n");

}


    return 0 ;
}