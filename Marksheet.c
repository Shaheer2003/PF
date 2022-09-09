#include <stdio.h>
main(){
	int s1,s2,s3,s4,s5,sum;
	float avg,percentage;
	sum=0;
	avg=0;
	percentage=0;
	printf("Enter Marks: ");
	scanf("%d",&s1);
	printf("Enter Marks: ");
	scanf("%d",&s2);
	printf("Enter Marks: ");
	scanf("%d",&s3);
	printf("Enter Marks: ");
	scanf("%d",&s4);
	printf("Enter Marks: ");
	scanf("%d",&s5);
	sum=s1+s2+s3+s4+s5;
	avg=sum/5;
	percentage=sum*100/500;
	printf("Your Total Marks are: %d",sum);
	printf("\n Your Average Marks are: %f",avg);
	printf("\n Your Percentage is: %f",percentage);
}