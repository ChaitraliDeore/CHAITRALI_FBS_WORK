#include<stdio.h>
void main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks>0)
    {
        if (marks>75 && marks<=100)
        {
            printf("Distinction");
        }
        else if (marks>65 && marks<75)
        {
            printf("First class");
        }
        else if (marks>55 && marks<65)
        {
            printf("Second class");
        }
        else if(marks>=40 && marks<55)
        {
            printf("Pass class");
        }    
        else if(marks<40)
        {
            printf("fail");
        }
    }
   
}