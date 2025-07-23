#include<stdio.h>
void main()
{
    float l,w,perimeter;
    printf("Enter the length & Width of rectangle:");
    scanf("%f %f",&l,&w);
    perimeter=(l+w)*2;
    printf("Perimeter of rectangle is %f",perimeter);
}