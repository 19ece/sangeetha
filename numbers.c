#include<stdio.h>
int main()
{
int num;
printf("Enter the number");
scanf("%d",&num);
if(num>0)
{
printf("%d is positive number");
}
else if(num<0)
{
printf("%d is negative number");
}
else(num=0)
{
printf("%d is zero");
}
return (0);
}
