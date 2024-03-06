#include <stdio.h>
int main(){

	char str[100];
	printf("Enter the string : ");
	fgets(str,sizeof(str),stdin);
	

	int countA=0,countE=0,countI=0,countO=0,countU=0;
	
for(int p=0;str[p]!='\0';p++){

	if(str[p]=='A'||str[p]=='a'){
		countA++;
	}
	 if(str[p]=='E'||str[p]=='e'){
                countE++;
        }
	 if(str[p]=='I'||str[p]=='i'){
                countI++;
        }
	 if(str[p]=='O'||str[p]=='o'){
                countO++;
        }
	 if(str[p]=='U'||str[p]=='u'){
                countU++;
        }
}

	 printf("Number of A's :%d\n",countA);
	 printf("Number of E's :%d\n",countE);
	 printf("Number of I's :%d\n",countI);
	 printf("Number of O's :%d\n",countO);
	 printf("Number of U's :%d\n",countU);


	return 0;


}
	
