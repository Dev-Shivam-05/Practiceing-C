#include<stdio.h>
int main(){
	int a,b,sum,sub,prod,div,mod;
	printf("Provide me a number : ");
	scanf("%d",&a);
	
	printf("Provide me a number : ");
	scanf("%d",&b);
	
	sum=a+b;
	sub=a-b;
	prod=a*b;
	div=a/b;
	mod=a%b;
	
	printf("the sum is %d\n",sum);
	printf("the sub is %d\n",sub);
	printf("the prod is %d\n",prod);
	printf("the div is %d\n",div);
	printf("the mod is %d\n",mod);
	
}
