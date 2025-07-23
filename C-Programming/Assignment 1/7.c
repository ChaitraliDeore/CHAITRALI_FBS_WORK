#include<stdio.h>
void main()
{
    int min,hrs;
    printf("Enter minutes:");
    scanf("%d",&min);
    hrs=min/60;
    min=min%60;
    printf("Minutes to hours:%d hours and %d min",hrs,min);
}