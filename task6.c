#include<stdio.h>

int main(){
int number,a=0,b=1,i,c;
printf("enter your number: ");
scanf("%d",&number);

for(i=1; i<=number; i++){
printf("%d\n",a);
c=a+b;
a=b;
b=c;
}

}