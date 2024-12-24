#include<stdio.h>
int main(){
	int i,j,k;
	printf("Provide me a number : ");
	scanf("%d",&i);
	printf("Provide me a number : ");
	scanf("%d",&j);
	
	k=(i+j)*(i+j);
	
	printf("(%d+%d)*(%d+%d)= %d",i,j,i,j,k);
}
