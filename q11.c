#include<stdio.h>
int main(){

        int row,col,i,j;
        printf("Enter matrix row and coloumn: ");
        scanf("%d %d",&row,&col);

        int arr[row][col];
        printf("Enter the first matrix : ");
        for(i=0;i<row;i++){
                for(j=0;j<col;j++){
                        scanf("%d",&arr[i][j]);
                }
        }

	//Symmetric
	
  	int sym=0;
        for(i=0;i<row;i++){
                for(j=0;j<col;j++){
                       if(arr[i][j]!=arr[j][i]){
			       sym=1;
			       break;
			}
                }
        }
	if(sym==0){
		printf("It is a symmetric matrix.\n");
	}
	else{
		printf("It is not a symmetric matrix.\n");
	}
	
	//Lower Triangular

	int tri=0;
        for(int k=0;k<row;k++){
                for(int l=k+1;l<col;l++){
                       if(arr[k][l]!=0){
                               tri=1;
			       break;
                             
                        }
                }
        }
        if(tri==0){
                printf("It is a lower triangular matrix.\n");
        }
        else{
                printf("It is not a lower triangular matrix.\n");
        }

	//Diagonals
	














	return 0;
}


