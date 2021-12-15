#include<stdio.h>
int b[2][3]={{10,20,30},{40,50,60}};
int main()
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d "b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
