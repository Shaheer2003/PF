#include <stdio.h>
main(){
	float empID,totalhours,payrate;
	float salary=0;
	puts("Enter your Employee ID, Hours worked and Payrate for the month");
	scanf("%f %f %f",&empID,&totalhours,&payrate);
	salary=totalhours*payrate;
	printf("Your employee id is %.0f",empID);
    printf("\nYour salary for the month is %.2f",salary);	
}
