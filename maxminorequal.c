#include<stdio.h>
int main()
{
int a,b;
printf("enter your values of a");
scanf("%d",&a);
printf("enter your values of b");
scanf("%d",&b);
if(a>b)
{
printf("maximum number is=%d",a);
}
else
{
printf("maximum number is=%d",b);
}
if(a<b)
{
printf("minimum number is=%d",a);
}
else
{
printf("minimum number is=%d",b);
}
if(a==b)
{
printf("both number are equal");
}
return 0;
}
