#include<stdio.h>
main(){
float a,b,c,det,positive,negative,x,y;
puts("Enter a,b,c\nNote: value of a cannot be 0");
scanf("%f %f %f",&a,&b,&c);
det=sqrt(b*b-4*a*c);
positive=-b+det;
negative=-b-det;
x=positive/(2*a);
y=negative/(2*a);
printf("The roots are %f,\n%f",x,y);
}

