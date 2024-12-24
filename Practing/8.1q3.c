//Write a Program to print 1 to N using a while loop.
#include<stdio.h>
#include<conio.h>
int main(){
	int i,j=1;
	printf("provide me a number : ");
	scanf("%d",&i);
	
	while(i>=j){
		if(i%3==0){
			printf("%d",i);
		
			continue;
		}
		
		i--;
	}
}
