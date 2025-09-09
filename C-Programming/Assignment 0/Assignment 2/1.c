#include<stdio.h>
void main()
{
    int a,b;
    float res;
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    char op;
    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&op);
    if(op=='+')
    {
        res=a+b;
        printf("%f",res);
    }
    else
    {
        if(op=='-')
        {
            res=a-b;
            printf("%f",res);
        }
        else
        {
            if(op=='*')
            {
                res=a*b;
                printf("%f",res);
            }
            else
            {
                if(op=='/')
                {
                    if(b!=0)
                    {
                        res=a/b;
                        printf("%f",res);
                    }
                    else
                    {
                        printf("Error:Division by zero");
                    }
                }
                else
                {
                    printf("Invalid operator");
                }
            }
        }
    }

}  