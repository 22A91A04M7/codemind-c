#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,sum;
    scanf("%d",&a);
    sum=0;
    for (i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }
    if(sum>a)
    printf("True");
    else
    printf("False");
    return 0;
}
