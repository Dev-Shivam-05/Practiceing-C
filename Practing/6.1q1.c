//Write a Program to find the minimum number from the given 3 numbers using the
//ternary operator.
#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k;
	
	printf("Provide Me A Number : ");
	scanf("%d",&i);
	
	printf("Provide Me A Number : ");
	scanf("%d",&j);
	
	printf("Provide Me A Number : ");
	scanf("%d",&k);
	
	if(i<j && i<k){
			printf("yes i=%d is smallest among all",i);
	}else if (j<i && j<k){
			printf("yes j=%d is the smallest among all",j);
	}else{
			printf("yes k=%d in smallest amoung all",k);
	}
	
}
