#include<stdio.h>
int main(){
int integerType;
float floatType;
char charType;
double doubleType;

    printf("Size of integer : %zu\n",sizeof(integerType));

    printf("Size of float : %zu\n",sizeof(floatType));


    printf("Size of char : %lu\n",sizeof(charType));

    printf("Size of double : %zu\n",sizeof(doubleType));

}
