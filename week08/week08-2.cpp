#include<stdio.h>
int main()
{
    int a,b=0;
    printf("請輸入數字: ");
    scanf("%d",&a);
    for(int i=2;i<a;i++)
    {
        if(a%i==0)b=1;
    }
    if(b==1)printf("<%d>不是質數",a);
    else printf("<%d>是質數",a);
    return 0;
}
