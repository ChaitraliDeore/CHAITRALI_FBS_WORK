#include<stdio.h>
void main()
{
    int no=10,flag=0,i;
    for(i=2;i<=no/2;i++)
    {
        if(no%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is prime",no);
    }
    else
    {
        printf("%d is not prime",no);
    }
}