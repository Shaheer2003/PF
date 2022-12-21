#include <stdio.h>
int main(){
	int i,j,k;
	char name[4][30];
	scanf("%d",&n);
	puts("Enter Runners' Names");
	fflush(stdin);
	for(i=0;i<4;i++){
		gets(name[i]);
	}
	int arr[4][4][7];
	for(i=0;i<4;i++){
		printf("\n\tEnter details for runner %d\n",i+1);
		for(j=0;j<4;j++){
			printf("\n\tEnter  Week %d details\n",j+1);
			for(k=0;k<7;k++){
				printf("Enter miles ran on Day %d ",k+1);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	printf("\n\tTotal and Avg miles per day run by each runner each day : \n\n",i+1);
	printf("Day	Total Miles	Average Miles per day\n\n");
	int ctr=0,count=0;
	int total=0;
	for(i=1;i<=28;i++){
		total=0;
		for(j=0;j<4;j++){
			for(count=0;count<n;count++){
				total+=arr[count][j][ctr];	
			}	
		}
		printf("%d	%d",i,total);
		printf("	%d\n",total/n);
		if(ctr==6) ctr=0;
		ctr++;
	}
	total=0;
	ctr=0;
	printf("\n\n");
	for(i=0;i<n;i++){
		printf("Average miles run per week by %s is",name[i]);
		for(k=0;k<4;k++){
			for(j=0;j<7;j++){
				total+=arr[i][k][j];
			}
		}
		printf(" %d\n",total/4);
		total=0;
	}
	return 0;
}

