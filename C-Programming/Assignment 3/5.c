#include<stdio.h>
void main()
{
    int price,ch;
    float dis,Total;
    printf("Enter price:");
    scanf("%d",&price);

    printf("Student or Not\n(1 for Yes/2 for No):");
    scanf("%d",&ch);

    if (ch==1)
    {
        if(price>=500)
        {
            dis=price*20/100;
            Total=price-dis;
            printf("\ntotal is %f",Total);
        }
        else
        {
            dis=price*10/100;
            Total=price-dis;
            printf("\ntotal is %f",Total);
        }
    }
    else
    {
        if(price>=600)
        {
            dis=price*15/100;
            Total=price-dis;
            printf("\ntotal is %f",Total);
        }
        else
        {
            printf("No discount");
        }
    }
    
}