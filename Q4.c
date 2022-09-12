#include <stdio.h>
main(){
	float rate,salary,tax,net;
	printf("Enter tax rate: ");
	scanf("%f",&rate);
	printf("Enter Salary: ");
	scanf("%f",&salary);
	tax=salary*rate/100;
	net=salary-tax;
	printf("The Tax is: %f",tax);
	printf("\nYour Net Salary is: %f",net);
}

