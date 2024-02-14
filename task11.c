#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int number;
    int lower, upper;
     printf("enter your lower value: ");
     scanf("%d",&lower);
    printf("enter your upper value: ");
     scanf("%d",&upper);
    srand(time(NULL));

    number = (rand() % (upper-lower+1)) + lower ;

    printf("%d",number);
}