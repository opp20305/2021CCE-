#include <stdio.h>
int main()
{
    int a=500,b=250;
    printf("a=%d,b=%d\n",a,b);
    b=a; a=b;
    printf ("a=%d,b=%d",a,b);
    return 0;

}
