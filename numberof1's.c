#include <stdio.h>
int main(){
	int M,N,count=0,i,j,max=0,row=-1;
	puts("Enter rows for matrix");
	scanf("%d",&M);
	puts("Enter columns for matrix");
	scanf("%d",&N);
	int arr[M][N];
	int temp;
	puts("Enter array elements: 0 or 1");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			scanf("%d",&temp);
			while(temp != 1 && temp != 0){
				puts("Invalid Input! Enter again");
				scanf("%d",&temp);
			}
			arr[i][j]=temp;
		}
	}
	for(i=0;i<M;i++){
		count=0;
		for(j=0;j<N;j++){
			if(arr[i][j]==1){
				count++;
			}
		}
		if(count>max){
			max=count;
			row=i+1;
		}
	}
	if(count>0){
	printf("The Maximum 1's are present in row %d",row);
    }
    else if(count==0){
    	printf("No 1 present in any row");
	}
	
	










	return 0;
}