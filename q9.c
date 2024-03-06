#include<stdio.h>
int main(){

	int row,col,i,j;
	printf("Enter matrix row and coloumn: ");
	scanf("%d %d",&row,&col);

	int arr1[row][col];
	printf("Enter the first matrix : ");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	
	int arr2[row][col];
        printf("Enter the second matrix : ");
        for(i=0;i<row;i++){
                for(j=0;j<col;j++){
                        scanf("%d",&arr2[i][j]);
                }       
        }     

	int arr3[row][col];
        for(i=0;i<row;i++){
                for(j=0;j<col;j++){
                        arr3[i][j] = arr1[i][j] + arr2[i][j];
                }
        }


        printf("The matrix after addition is :\n");
        for(i=0;i<row;i++){
                for(j=0;j<col;j++){
                        printf("%d\t",arr3[i][j]);
                }
		printf("\n");
        }

	return 0;
}

