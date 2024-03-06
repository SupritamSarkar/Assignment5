#include<stdio.h>
#include<string.h>
int main(){

	char str[50];
	printf("Enter the string : ");
	scanf("%s",str);
	
	int len = strlen(str);
	int flag=0;
	for(int i=0;i<len/2;i++){
		if(str[i]!=str[len-1-i]){
			flag=1;
			break;
		}
	}

	if(flag==1){
		printf("It is not a palindrome\n");
	}
	else{
		printf("It is a palindrome\n");
	}

	return 0;
}

