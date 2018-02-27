#include<stdio.h>
int main()
{
	int N,K,i,a[100];
	scanf("%d\n%d",&N,&K);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=N;i++)
	{
		if(K==a[i])
		{
		printf("Yes");
}
}
return 0;
}
