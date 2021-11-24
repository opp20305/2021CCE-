#include <stdio.h>
int b[100];
int main()
{
	for(int i=0;i<100;i++)
	{
		scanf("%d",& b[i]);
	}
	for(int k=0;k<100-1;k++)
	{
		for(int i=0;i<100-1;i++)
		{
			if(b[i]>b[i+1])
			{
				int t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
		}
	}
	for(int i=0;i<100;i++)
	{
		printf("%d\n",b[i]);
	}
}
