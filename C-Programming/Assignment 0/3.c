#include<stdio.h>
void main()
{
    int c;
    float f;
    printf("Enter temperature in celsius:");
    scanf("%d",&c);
    f=(c*9/5)+32;
    printf("Temperature in fahernheit is %f",f);

}