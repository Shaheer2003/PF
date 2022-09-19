#include<stdio.h>
main(){
	int totaldays,years,mod,weeks,days;
	puts("Enter number of days");
	scanf("%d",&totaldays);
	years = totaldays/365;
	mod = totaldays%365;
	weeks = mod/7;
	days=mod%7;
	printf("%d Years,",years);
	printf("%d Weeks, ",weeks);
	printf("%d Days",days);
	
}
