#include<stdio.h>
void main()
{
    for(int i=5;i>=1;i--)
    {
        for(int space=i;space<5;space++)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i-
            1);j++)
        {

            printf("*");
        }
        printf("\n");
    }
}