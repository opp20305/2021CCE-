#include<stdio.h>
int main()
{
    int a;
    printf("輸入要求質數的範圍: ");
    scanf("%d",&a);
    for(int i=2;i<a;i++)
    {
        int b=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)b=1;
        }
        if(b==0)printf("%d ",i);
    }
    return 0;
}
