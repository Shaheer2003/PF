#include <stdio.h>
int main(){
int arr[5][3]={{33,3,159},
               {234,122,351},
			   {100,140,19},
			   {53,310,76},
			   {111,2,4}};
int i,j,max=0,min=999,maxindex,minindex;
int maxcap[3]={300,500,200};
int profit[5]={0};
float caputil[5][3];
for(i=0;i<5;i++){
	for(j=0;j<3;j++){
		profit[i]+=arr[i][j];
	}
}
for(i=0;i<5;i++){
if(profit[i]>max){
max=profit[i];
maxindex=i+1;
}
}
for(i=0;i<5;i++){
if(profit[i]<min){
	min=profit[i];
	minindex=i+1;
}
}
printf("District %d is making the Maximum Profit\n\n",maxindex);
printf("District %d is making the Least Profit\n",minindex);
printf("\nTotal Number of Customers for:\n");
for(i=0;i<5;i++)
printf("District %d: %d\n",i+1,profit[i]);

for(i=0;i<5;i++){
	for(j=0;j<3;j++){
		caputil[i][j]=(arr[i][j]/(float)maxcap[j])*100;
	}
}
puts("\nCapacity Utilisation Distribution");
for(i=0;i<5;i++){
	for(j=0;j<3;j++){
		printf("%.2f  ",caputil[i][j]);
		}
		puts("");
}
puts("");
for(i=0;i<5;i++){
	float maxc=0;
    for(j=0;j<3;j++){
		caputil[i][j]=(arr[i][j]/(float)maxcap[j])*100;
	if(caputil[i][j]>maxc){
		maxc=caputil[i][j];
		maxindex=j+1;
		}
	}
	printf("In District %d: Branch %d has Max Capacity Util\n",i+1,maxindex,maxc);
	}
	puts("");
	
for(i=0;i<5;i++){
	float minc=999;
	for(j=0;j<3;j++){
		caputil[i][j]=(arr[i][j]/(float)maxcap[j])*100;
	if(caputil[i][j]<minc){
			minc=caputil[i][j];
			minindex=j+1;		
		}	
	}
	printf("In District %d: Branch %d has Least Capacity util\n",i+1,minindex,minc);
	}

}