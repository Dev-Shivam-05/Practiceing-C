#include<stdio.h>
int main(){
	int i,j,k;
	printf("provide me a number : ");
	scanf("%d",&i);
	printf("provide me a number : ");
	scanf("%d",&j);
	
	printf("before swaping the value of i is = %d and the value of j = %d",i,j);
	
	i=i+j;
	j=i-j;
	i=i-j;
	
	printf("\nafter swaping the value of i is = %d and the value of j = %d",i,j);
	
	
}
