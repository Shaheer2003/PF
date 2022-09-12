#include <stdio.h>
main (){
	float time,distance;
	float avgspeed;
	printf("Enter Time Travelled, time travelled should be between 1 to 5 hours\n");
	scanf("%f", &time);
	printf("Enter Distance Travelled, Distance travelled should be greater than 0\n");
	scanf("%f", &distance); 
	avgspeed = distance/time;
	printf("\nAverage Speed of the car is %f", avgspeed);

}
