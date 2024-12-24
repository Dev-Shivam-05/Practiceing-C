//Write a Program to find an average mark from a total of three subject marks of a
//student. Each subject’s marks must be given out of 100.
#include<stdio.h>
#include<conio.h>
int main(){
	float i,j,k;
	float avg;
	
	printf("provide me a number : ");
	scanf("%f",&i);
	
	printf("provide me a number : ");
	scanf("%f",&j);
	
	printf("provide me a number : ");
	scanf("%f",&k);
	
	avg=j + k+ i;
	
	printf("%f",avg/3);
	
}
