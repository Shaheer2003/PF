#include <stdio.h>
main(){
int a,b;
printf("Enter 1st number: ");
scanf("%d",&a);
printf("Enter 2nd number: ");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("Swapping done: %d",a);
printf(", %d",b);
}