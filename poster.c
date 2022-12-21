#include<stdio.h>
	int main(){
		int n;
		int h;
		puts("Enter two integers");
		scanf("%d %d",&n,&h);
		int wallpoint[n];
		int length[n];
		puts("Enter Wallpoints");
		for(int i=0;i<n;i++){
			scanf("%d",&wallpoint[i]);
		}
		puts("Enter Length");
		for(int i=0;i<n;i++){
			scanf("%d",&length[i]);
		}
		float max=0;
		for(int i=0;i<n;i++){
			if((wallpoint[i]-(length[i]*0.25))>max){
				max=wallpoint[i]-(length[i]*0.25);
			}
		}
		max=(max-h);
		if(max<0)	max=0;
		printf("%.2f",max); 
	}
	