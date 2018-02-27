#include<stdio.h>
int main()
{
int b,c;
scanf("%d",&b);
while(b>0)
{
c=b%2;
b=b/2;
printf("%d",c);
}
return 0;
}
