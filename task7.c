#include<stdio.h>
#include<conio.h>

void main(){
float fahrenheit,celsius,fc,cf;
printf("enter the fahrenheit value: ");
scanf("%f" ,&fahrenheit);
printf("\nenter the celsius value: ");
scanf("%f" ,&celsius);

fc=(fahrenheit-32)*5/9;
cf=(celsius*9/5)+32;

printf("celsius: %f",fc);
printf("\nfahrenheit: %f",cf);


}