#include <stdio.h>
int main()
{
    int a=500,b=250,c;
    printf("a=%d,b=%d\n",a,b);
    c=a; a=b; b=c;
    printf ("a=%d,b=%d",a,b);
    return 0;

}
