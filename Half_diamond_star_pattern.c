#include<stdio.h>
int main()
{
    int i,j,n,p,q;
    scanf("%d",&n);
    if(n>=3)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("
");
        }
        for(p=n-1;p>=1;p--)
        {
            for(q=1;q<=p;q++)
            {
                printf("*");
            }
            printf("
");
        }
    }
    else
    {
        printf("The pattern is not possible");
    }
}