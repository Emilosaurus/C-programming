#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct pol
{
    int coefficient;
    int exp;
    
}T[20];

void main()
{
    int i,n;
    printf("\nEnter the order of the polynomial : ");
    scanf("%d",&n);
    printf("\nEnter the coefficient of the polynomial : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&T[i].coefficient);
    }
    printf("\nEnter the exponents : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&T[i].exp);
    }
    printf("\n The polynomial\n");
    for(i=0;i<n;i++)
    {
        printf("%dx^%d + ",T[i].coefficient,T[i].exp);
    }
}