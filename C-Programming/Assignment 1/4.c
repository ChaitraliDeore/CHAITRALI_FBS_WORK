#include<stdio.h>
void main()
{
    int a=5,b=10;
    int temp;
    printf("Before swapping a=%d and b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping a=%d and b=%d",a,b);


}