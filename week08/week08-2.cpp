#include<stdio.h>
int main()
{
    int a,b=0;
    printf("�п�J�Ʀr: ");
    scanf("%d",&a);
    for(int i=2;i<a;i++)
    {
        if(a%i==0)b=1;
    }
    if(b==1)printf("<%d>���O���",a);
    else printf("<%d>�O���",a);
    return 0;
}
