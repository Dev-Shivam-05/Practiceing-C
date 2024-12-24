#include<stdio.h>
int main(){
	int i,j,k;
	printf("Provide me a number : ");
	scanf("%d",&i);
	printf("Provide me a number : ");
	scanf("%d",&j);
	
	printf("the value before swaping of i is = %d and j is =%d",i,j);
	
	k=i;
	i=j;
	j=k;
	
	printf("\nthe value after swaping of i is = %d and j is =%d",i,j);
}
