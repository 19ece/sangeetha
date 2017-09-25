#include<stdio.h>
int main()
{
char string[100],n;
int p;
printf("Enter the string");
scanf("%s",string);
strcpy(string,n);
p=strcmp(string,n);
if(p==0)
{
printf("Given string is palindrom");
}
else
{
printf("Given number is not a palindrom");
}
return 0;
}
