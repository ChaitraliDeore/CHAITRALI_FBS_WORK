#include<stdio.h>
void main()
{
    int no,res;
    printf("Enter number:");
    scanf("%d",&no);
    if(no>0)
    {
        if(no%3==0 && no%5==0)
        {
            printf("%d is divisible by both 3 & 5",no);
        }
        else if(no%3==0)
        {
            printf("%d is divisible by 3 but not 5",no);
        }
        else if(no%5==0)
        {
            printf("%d is divisible by 5 but not 3",no);
        }
        else
        {
            printf("%d is divisible by none",no);
        }
    }   
}