#include<stdio.h>
int main()
{
	int i,n,sum = 0,d;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		scanf("%d",&d);
		sum+=d;
	}
	printf("sum is:%d\n",sum);
	return 0;
}
