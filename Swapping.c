#include <stdio.h>
main(){
int a,b,c;
c = 0;
printf("Enter 1st number: ");
scanf("%d",&a);
printf("Enter 2nd number: ");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("Swapping done: %d",a);
printf(", %d",b);
}
