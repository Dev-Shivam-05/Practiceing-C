//#include<stdio.h>
//#include<conio.h>
//int main(){
//	float avg;
//	int i,j,k;
//	int sum=0,c=0;
//	
//	printf("Enter How Many Rows Do You Want : ");
//	scanf("%d",&i);
//	
//	printf("Enter How Many column Do You Want : ");
//	scanf("%d",&j);
//	
//	int arr[i][j];
//	
//	printf("the Elements of the array   ");
//	for(i=0; i<i; i++){
//		for(j=0; j<j; j++){
//			
//			scanf("%d",&arr[i][j]);
//			sum += arr[i][j];
//			c++;
//		}
//	}
//	avg=(float)sum/c;
//	
//	printf("The Avrage Of The Given Array is %d",avg);
//} 






#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0, count = 0;
    float average;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d",&arr[i][j]);   

            sum += arr[i][j];
            count++;
        }
    }

    average = (float)sum / count;

    printf("The average of the 2D array is: %.2f\n", average);

    return 0;
}
