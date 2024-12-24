//Write a Program to create a menu-driven program for Telecom call service
//conversation using nested switch case.
#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k;
	
	printf("\nPress 1 For English");
	
	printf("\nPress 2 For Hindi");
	
	printf("\nPress 3 For Gujarati");
	
	printf("\n\nEnter your choice : ");
	scanf("%d",&i);
	
	if(i==1){
		
	printf("\nPress 1 For Internet Recharge");
	
	printf("\nPress 2 For Top-Up Reacharge");
	
	printf("\nPress 3 For Special Reacharge");
	
	printf("\n\nEnter your choice : ");
	scanf("%d",&k);
	
	printf("\nYou Have Sucessfully reacharged");
	}
	else if(i==2){
			
	printf("\nInternet Recharge ke liye 1 dabaye");
	
	printf("\nTop-Up Reacharge ke liye 2 dabaye");
	
	printf("\nSpecial Reacharge ke liye 3 dabaye");
	
	printf("\n\nEnter your choice : ");
	scanf("%d",&k);
	
	printf("\nAapka reacharge safal raha.");
	
	}
	else if (i==3){
				
	printf("\nInternet Recharge mate 1 dabavo");
	
	printf("\nTop-up Recharge mate 2 dabavo");
	
	printf("\nSpecial Recharge mate 3 dabavo");
	
	printf("\n\nEnter your choice : ");
	scanf("%d",&k);
	
	printf("\nTame safaltapurvak Special Recharge karyu chhe.");
		
	}
	else{
		printf("Sorry,you have done a wrong input.");
	}
	
}
