#include<stdio.h>
int main()
{
 int x,rev=0,rem,n;
 scanf("%d",&n);
 x=n;
 while(n!=0)
 {
 rem=n%10;
 rev=rev*10+rem;
 n/=10;
 }
 if (x==rev)
 {
 printf("True");
 }
 else
 {
 printf("False");
 }
}