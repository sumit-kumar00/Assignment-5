#include<stdio.h>
int main()
{
    int i,k,sum;
    printf("enter a number");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        sum=i*i;
        printf("\nsquare of %d is %d",i,sum);
    }
}