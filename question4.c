#include<stdio.h>
int main()
{
    int i,k;
    printf("enter the limit of odd number");
    scanf("%d",&k);
    for(i=1;i<=k;i+=2)
        printf("\n%d",i);
}