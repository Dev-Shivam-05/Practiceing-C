#include<stdio.h>
#include<conio.h>
int main (){
	int row,column;
	
	int i,j;//Decalring variable for loops
	
	printf("Enter How Many Row Do You Want : ");
	scanf("%d",&row);
	
	printf("Enter How Many colummn Do You Want : ");
	scanf("%d",&column);
	
	int arr[row][column];
	
	for(i=0; i<row; i++){
	
		for(j=0; j<column; j++ ){
	
			printf("Enter The Value Of arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
	
		}
	}
	for(i=0; i<row; i++){
	
		for(j=0; j<column; j++){
	
			if(arr[i][j]<0){
	
				printf("arr[%d][%d] = %d Is Negative From The Given Array\n",i,j,arr[i][j]);
	
			}
			else{
	
				printf("");
	
			}
		}
	}
}
