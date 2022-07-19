#include<stdio.h>
int main()
{
    int i,k;
    printf("enter a limit of of odd numbers");
    scanf("%d",&k);
    for(i=k;i>=1;i-=2)
        printf("\n%d",i);
}