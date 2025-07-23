#include<stdio.h>
void main()
{
    int maths,phy,chem,bio,eng;
    float total,percentage;
    printf("Enter the marks of 5 subjects:");
    scanf("%d %d %d %d %d",&maths,&phy,&chem,&bio,&eng);
    total=maths+phy+chem+bio+eng;
    percentage=(total/500)*100;
    printf("Total percentage is %f",percentage);


}