#include<stdio.h>
int main()
{
	int N,K,i,a[100],c=0;
	scanf("%d\n%d",&N,&K);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=N;i++)
	{
		if(K==a[i])
		{
			c++;
}
}
printf("%d",c);
return 0;
}
