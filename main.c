#include <stdio.h>
int main() {

int a ;
// first give access to get input from user
printf("Enter a number : ");
scanf("%d",&a);

  // code for multiplication table 
 printf("Table of %d : \n",a);
 
  for(int i=1; i<=10; i++) 
    {
      printf("%d*%d = %d \n",i,a,a*i);
    
  
    }
  
  return 0;
}