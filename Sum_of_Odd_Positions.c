#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int a[N],sum=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(i%2!=0)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
}