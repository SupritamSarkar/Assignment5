#include<stdio.h>

#include<string.h>

 

int main(){

    char str1[50],str2[50];

    printf("Enter the 1st string:");

    scanf("%s",str1);

    printf("Enter the 2nd string:");

    scanf("%s",str2);

 

    int len1=strlen(str1);

    int len2=strlen(str2);

 

    for(int i=0;i<len2;i++){

        str1[len1+i]=str2[i];

    }

    str1[len1+len2]='\0';

   

    printf("the Final string is : %s",str1);



return 0;

}
