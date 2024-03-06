#include<stdio.h>
int main(){
    char str[50];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);

    printf("The upper case string: ");
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&& str[i]<='z'){
        str[i]=str[i]-'a'+'A';
        }

    }

    printf("Upper case string: %s",str);



return 0;
}