#include<stdio.h>
int b[100];
int main()
{
    for(int i=0;i<100;i++)scanf("%d",&b[i]);
    for(int i=99;i>0;i--)printf("%d\n",b[i]);
}
