#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    ///while(a>0)
    ///{
        ///��²���¦���q��
        for(int i=0;i<a;i++)
        {
            printf("�li:%d\n",i);
        }

        ///��²���¦�� �H�ƼƦr
        for(int i=1;i<=a;i++)
        {
            printf("�_i:%d\n",i);
        }

        ///0��a���C
        for(int i=0;i<=a;i++)
        {
            printf("��i:%d\n",i);
        }
       ///break;
    ///}
    return 0;
}
