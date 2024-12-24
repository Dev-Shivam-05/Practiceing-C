//Write a Program to find the maximum number from the given 4 numbers using nested
//if else. Also, draw a Flowchart in your book.
#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k;
	
	printf("provide me a number : ");
	scanf("%d",&i);
	
	printf("provide me a number : ");
	scanf("%d",&j);
	
	printf("provide me a number : ");
	scanf("%d",&k);
	
	if(i > j){
		if(i > k){
			printf("i = %d is greatest",i);
		}
		else{
			printf("k = %d is the greatest",k);
		}
	}
	else if (j > k){
		printf("j = %d is the greatest",j);
	}
	else{
		printf("k = %d is the greatest",k);
	}
}
