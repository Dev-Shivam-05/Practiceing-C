//Write a Program to find if a given number is neutral or not using a ladder if else
#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k;
	
	printf("Provide me a number : ");
	scanf("%d",&i);
	
	if(i<0){
		printf("The number is negative");
	}
	else if(i>0){
		printf("the number is positive");
	}
	else{
		printf("The number is netrual");
	}
	return 0;
}
