#include<stdio.h>
#include<string.h>
char s[3000];
int main()
{
	scanf("%s",s);
	int n=strlen(s);
	int b=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]!=s[n-1-i])
		b=1;
	}
	if(b==0)printf("YES\n");
	else printf("NO\n");
}
