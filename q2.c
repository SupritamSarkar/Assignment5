#include<stdio.h>
int main(){
	int n,i,index;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array : ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("The array is :\t");
	for(i=0;i<n;i++){
                printf("%d\t",arr[i]);
        }
	
	printf("\n");

	printf("Enter the index which you want to delete :");
	scanf("%d",&index);

	for(i=index;i<n;i++){
		arr[i]=arr[i+1];
	}
	
	printf("Now the array is :\t");
	for(i=0;i<n-1;i++){
                printf("%d\t ",arr[i]);
        }





	return 0;
}
