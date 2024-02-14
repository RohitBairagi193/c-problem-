#include<stdio.h>
#include<string.h>

void main(){

char str[100],rev[100];
int i=0,j=0;
printf("enter your string: ");
scanf("%s",&str);

for (i=strlen(str)-1; i>=0; i--){

    rev[j++]=str[i];
    }
    rev[j]='\0';

   printf("input string is %s\n",str);
    printf("reverse string is %s",rev);

}