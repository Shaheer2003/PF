#include <stdio.h>
main(){
	float rate,fund,salary,tax,net;
	printf("Enter tax rate: ");
	scanf("%f",&rate);
	printf("Enter Provident Fund Contribution: ");
	scanf("%f",&fund);
	printf("Enter Salary: ");
	scanf("%f",&salary);
	tax=salary*rate/100;
	net=salary-(fund+tax);
	printf("The Tax is: %f",tax);
	printf("Your Net Salary is: %f",net);
}