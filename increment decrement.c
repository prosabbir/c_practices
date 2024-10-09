/*
#include<stdio.h>
int main(){
int a = 5 , b = 10;
float c = 10.4 , d = 123.4532;

printf("++a = %d\n",++a);
printf("--b = %d\n",--b);
printf("++c = %f\n",--c);
printf("--d = %lf\n",--d);
}
*/

#include<stdio.h>
int main(){
int a = 5 ,c;

c = a;

c+=a;
printf("c+a = %d\n",c);
c-=a;
printf("c-a = %d\n",c);
c*=a;
printf("c*a = %d\n",c);
}
