#include <stdio.h>


int main (void)
{   int x ;
    int i ;
  int arr[6]={5,2,3,4,6,1} ;
for (i=0;i<6 ;++i) 
{
    for (int j=0 ;j<6;++j)
    {
 if (arr[j]>arr[j+1])
 {
x=arr[j];
arr[j]=arr[j+1] ;
arr[j+1]=x ;

 }
    }
}
for (i=0;i<6 ;++i)
{
    printf("%d \n",arr[i]);
}
    return 0 ;
}
