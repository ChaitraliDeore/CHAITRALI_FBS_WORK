#include<stdio.h>
void main()
{
    float a,b,c,d,e;
    int sum,average;
    printf("Enter the five numbers:");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    average=sum/5;
    printf("Average of five numbers is %d",average);
}