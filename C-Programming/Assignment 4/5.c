#include<stdio.h>
#include<math.h>
void main()
{
    int no=370;
    int temp=no,rem,sum=0;
    int count=0;
    while(no>0)
    {
        count++;
        no=no/10;
    }
    while(no>0)
    {
        rem=no%10;
        int res=1;
        for(int i=1;i<=count;i++)
        {
            res=res*rem;
        }
        sum=sum+res;
        no=no/10;
    }
    if(sum==temp)
    {
        printf("%d is armstrong",temp);
    }
    else
    {
        printf("%d is not armstrong",temp);
    }
}