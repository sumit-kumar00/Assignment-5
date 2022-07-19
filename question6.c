#include<stdio.h>
int main()
{
    int i,k;
    printf("enter a limit of even number");
    scanf("%d",&k);
    for(i=2;i<=k;i+=2)
        printf("\n%d",i);
}