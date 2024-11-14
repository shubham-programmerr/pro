#include<stdio.h>
void main()
{
    int num1,num2;
    num1=10;
    num2=23;
    printf("num1=%d and num2=%d",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("num1=%d and num2=%d",num1,num2);
}