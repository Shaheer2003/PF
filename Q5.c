#include<stdio.h>
main(){
	int hours,minutes,totalminutes;
    puts("Enter hours and minutes");
    scanf("%d %d",&hours,&minutes);
    totalminutes = hours * 60 + minutes;
    printf("Total number of minutes is %d",totalminutes);
}
