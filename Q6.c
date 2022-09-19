#include <stdio.h>
main(){
	float x1,x2,y1,y2,x,y,mpx,mpy,dist;
	puts("enter x1 and y1");
	scanf("%f %f",&x1,&y1);
    puts("enter x2 and y2");
	scanf("%f %f",&x2,&y2);
	mpx=(x1+x2)/2;
	mpy=(y1+y2)/2;
	x=x2-x1;
	y=y2-y1;
	dist=sqrt((x*x)+(y*y));
	printf("Midpoint is %f,%f",mpx,mpy);
	printf("\nDistance = %f",dist); 
}
