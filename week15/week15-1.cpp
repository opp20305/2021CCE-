#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a<0)a=-a;
    if(b<0)b=-b;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            c=i;
        }
    }
    printf("%d",c);
    return 0;
}
