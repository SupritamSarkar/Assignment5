#include<stdio.h>
int main(){

        int row,col,i,j;
        printf("Enter matrix row and coloumn: ");
        scanf("%d %d",&row,&col);

        int arr1[row][col];
        printf("Enter the matrix : ");
        for(i=0;i<row;i++){
                for(j=0;j<col;j++){
                        scanf("%d",&arr1[i][j]);
                }
        }

        int arr2[col][row];
        for(i=0;i<row;i++){
                for(j=0;j<col;j++){
                arr2[j][i] = arr1[i][j];        
                }
        }

	printf("The transpose matrix is:\n");
	for(j=0;j<row;j++){
		for(i=0;i<col;i++){
			printf("%d\t",arr2[j][i]);
		}
		printf("\n");
	}

	return 0;
	}

