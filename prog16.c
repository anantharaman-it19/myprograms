#include<stdio.h>
int main()
{
int a=0,i,n;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=a+i;
}
printf("sum of the first %d is %d",n,a);
return 0;
} 
