#include <stdio.h>
main(){
	int num1,num2;
	puts("Enter two Numbers");
	scanf("%d %d",&num1,&num2);
	printf("The sum of both numbers is %d",num1+num2);
    printf("\nThe difference of both numbers is %d",num1-num2);
    printf("\nThe product of both numbers is %d",num1*num2);
    printf("\nThe quotient of both numbers is %d",num1/num2);
    printf("\nThe remainder of both numbers is %d",num1 % num2);
}
