//Write a Program to find the minimum number from the given 2 numbers using if else.
#include<stdio.h>
#include<conio.h>
int main(){
	int i,j;
	
	printf("provide me a number : ");
	scanf("%d",&i);
	
	printf("provide me a number : ");
	scanf("%d",&j);
	
	if(i<j){
		printf("\nyes %d is smaller than %d",i,j);
	}
	else{
		printf("\nyes %d is smaller than %d",j,i);
	}
}
