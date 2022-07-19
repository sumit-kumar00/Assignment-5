#include<stdio.h>
int main()
{
    int i,k,cube;
    printf("enter a limit");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        cube=i*i*i;
        printf("\ncube of %d is %d",i,cube);
    }
}