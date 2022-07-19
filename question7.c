#include<stdio.h>
int main()
{
    int i,k;
    printf("enter a number");
    scanf("%d",&k);
    for(i=k;i>=2;i-=2)
        printf("\n%d",i);
}