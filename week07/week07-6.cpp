#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    ///while(a>0)
    ///{
        ///最簡單基礎型電腦
        for(int i=0;i<a;i++)
        {
            printf("始i:%d\n",i);
        }

        ///最簡單基礎型 人數數字
        for(int i=1;i<=a;i++)
        {
            printf("起i:%d\n",i);
        }

        ///0到a全列
        for(int i=0;i<=a;i++)
        {
            printf("全i:%d\n",i);
        }
       ///break;
    ///}
    return 0;
}
