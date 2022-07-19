#include<stdio.h>
int main()
{
    int i,k,m;
    printf("enter a number whose table you want to print");
    scanf("%d",&k);
    for(i=0;i<10;i++)
    {
        m=m+k;

        printf("\n%d",m);
    }
}