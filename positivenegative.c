#include <stdio.h>
#include <stdlib.h>
int main(){
	int size;
	puts("Enter array size");
	scanf("%d",&size);
	int a[size];
	int i,j;
	puts("Enter array elements");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
		
	for(i=0;i<size;i++){
		if(i%2==0 && a[i]<0){
			 	for(j=i+1;j<size;j++){
			 		if(a[j]>=0){
					a[j] = a[j] + a[i];
					a[i] = a[j] - a[i];
					a[j] = a[j] - a[i];
					break;
				    }	
				}
		}
		else if(i%2!=0 && a[i]>=0){
			 	for(j=i+1;j<size;j++){
			 		if(a[j]<0){
					a[j] = a[j] + a[i];
					a[i] = a[j] - a[i];
					a[j] = a[j] - a[i];
					break;
				}
			 		
			}
		}
	}
	for(i=0;i<size;i++){
		printf("%d, ",a[i]);
	}
	
	
	
	
}

