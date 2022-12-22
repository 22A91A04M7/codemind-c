#include <stdio.h>
int main()
{
 int n,a,b, i;
 //printf("%d",n);
 scanf("%d%d%d%d", &n,&a,&b,&i);
 for (i=a;i<=b;i++)
 {
 printf("%d x %d = %d
",n,i,n*i);
 }
}