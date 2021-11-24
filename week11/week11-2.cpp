#include<stdio.h>
int b[10000000]={0,0,0,0};
int main()
{
    int a,ans=0;
    scanf("%d",&a);
    for(int i=2;ans<a;i++)
    {
        if(b[i]==0)
        {
            ans++;
            printf("%d ",i);
            for(int k=i+i;k<10000000;k+=i)
            {
                b[k]=1;
            }
        }
    }
    return 0;
}
