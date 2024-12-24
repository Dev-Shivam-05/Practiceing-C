#include<stdio.h>
int main(){
	int i,square;
	printf("Enter one digit number : ");
	scanf("%d",&i);
	square=i*i;
	printf("----------\n");
	printf("|\t|");
	printf("\n|\t|");
	printf("\n| %dx%d=%d |",i,i,square);
	printf("\n|\t|");
	printf("\n|\t|");
	printf("\n----------\n");
}
