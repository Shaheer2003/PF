#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,capital,num,pattern,count,len;
	do{
		printf("Enter code: ");
		fflush(stdin);
		gets(str);
		len=strlen(str);
	capital=0,num=0,pattern=0,count=0;
		
	for(i=0;i<=len;i++){
		if(str[i]>='A' && str[i]<='Z'){
			capital++;
		}
		else if(str[i]>='0' && str[i]<='9'){
			num++;
		}
		else if(strstr(str,"ABCD")!=NULL){
			pattern++;
		}
	}
	if(capital>0 && num>=6 && pattern>0 && len==16){
		printf("Code accepted");
	}
	else{
		if(capital<1){
		printf("Error! Code does not contain Capital letters\n Enter Again\n");
		}
		if(num<6){
		printf("Error! Code does not contain 6 numbers\n Enter Again\n");
		}
		if(pattern<1){
		printf("Error! Code does not contain Pattern ABCD\n Enter Again\n");
		}
		if(len!=16){
		printf("Error! Code SIZE MUST BE 16\n Enter Again\n");
			}
		}
	}while(capital==0 || num<6 || pattern<1 || len!=16);
	return 0;
}