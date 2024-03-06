#include<stdio.h>

int main(){

    int i,newvalue,n,position;

    printf("Enter the size of the array: ");

    scanf("%d",&n);

    int arr[n];

    printf("Enter the array : ");

    for(i=0;i<n;i++){

        scanf("%d",&arr[i]);

    }

    printf("Enter a new value: ");

    scanf("%d",&newvalue);

 

    int flag=0;

    for(i=0;i<n;i++){

        if(arr[i]>newvalue){

            position=i;

            flag=1;

            break;

        }

    }

        if(flag==0){

            position=n;

        }

   

 

    for(i=n;i>position;i--){

        arr[i]=arr[i-1];

    }

    arr[position]=newvalue;

    n=n+1;

    printf("New list is :\t");

    for(i=0;i<n;i++){

        printf("%d\t",arr[i]);

    }




return 0;

}
