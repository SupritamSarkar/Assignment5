#include<stdio.h>
int main(){

	char str1[50],str2[50];

	printf("Enter the 1st string : ");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter the 2nd string : ");
        fgets(str2,sizeof(str2),stdin);

	int flag=0;

	for(int i=0;str1[i]!='\0' || str2[i]!='\0' ;i++){
		if(str1[i] != str2[i]){
			flag=1;
			break;
		}
	}

	if(flag==1){
		printf("Not Equal.");
	}
	else{
		printf("Equal");
	}


	return 0;
}
