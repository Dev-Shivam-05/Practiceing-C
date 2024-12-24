//Write a Program to find the minimum number from the given 3 numbers using nested
//if else. Also, draw a Flowchart in your book.
#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k;
	
	printf("Provide me a number : ");
	scanf("%d",&i);
	
	printf("Provide me a number : ");
	scanf("%d",&j);
	
	printf("Provide me a number : ");
	scanf("%d",&k);
	
	if(i < k){
		if(i < j){
			printf("i = %d is smallest.",i);
		}
		else{
			printf("j = %d is smallest.",j);
		}
	}
	else if (k < j){
		printf("k = %d is smallest",k);
	}
	else{
		printf("j = %d is smallest.",j);
	}
}
