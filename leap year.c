#include<stdio.h>
int main()
{
int year;
printf("Enter the year:");
scanf("%d",&year);
year=year%4;
if(year==0)
{
printf("Given year is leap year");
}
else
{
printf("Given year is not a leap year");
}
}
