#include<stdio.h>
int main(){

int num1;
float num2;
double num3;
char num4;

printf("enter integer : ");
scanf("%d",&num1);

printf("enter float : ");
scanf("%f",&num2);

printf("enter double : ");
scanf("%lf",&num3);

printf("enter char : ");
scanf(" %c",&num4);

printf("integer is %d\n",num1);
printf("float is %f\n",num2);
printf("double is %lf\n",num3);
printf("character is %c\n",num4);



}
