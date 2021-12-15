#include<stdio.h>
int b[1000][1000];
int main()
{
	int c,d;
	scanf("%d %d",&c,&d);
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<d;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	for(int j=0;j<d;j++)
	{
		for(int i=c-1;i>=0;i--)
		{
			printf("%2d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
