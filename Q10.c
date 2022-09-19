#include<stdio.h>
main(){
float height,mass,h2,BMI;
puts("Enter weight in pounds and height in inches");
scanf("%f %f",&mass,&height);
h2=height*height;
BMI = mass*703/h2;
printf("Your Body Mass Index is %.3f",BMI);
printf("\nUnderweight: less than 18.5\nNormal: between 18.5 and 24.9\nOverweight: between 25 and 29.9\nObese: 30 or greater");

}

