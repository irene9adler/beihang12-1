//����12���һ��
/*ĳЩ�����ֽܷ�����ɸ����������ĺ͵���ʽ������
    15 = 1 + 2��3��4��5��
    15 = 4 + 5 + 6
    15 = 7 + 8
ĳЩ�������ֽܷ�Ϊ���������ĺͣ����磺16
���룺һ������N��N <= 10000��
���������N��Ӧ�����зֽ���ϣ�����ÿ���ֽ��е���С������С���������ÿ���ֽ�ռһ�У�ÿ������֮����һ���ո�
��ÿ�������һ���ո񣩣����û���κηֽ���ϣ������NONE��
*/
#include <stdio.h>

int main()
{
    int r;
    //�κο��Խ��зֽ����������Ȼ����(m+n)(n-m+1)/2����ʽ ?????
    int m ,n;
    int s;
    int flag;
    int i;
    while(scanf("%d",&r)!=EOF)
    {
        flag = 0;
        for(m = 1;m<r;m++){
            for(n=m+1;n<r;n++)
        {
            s = (m+n)*(n-m+1)/2;
            if(s==r)
            {
                flag = 1;
                for(i=m;i<=n;i++)
                    printf("%d ",i);

                printf("\n");
            }
        }
      }
      if(flag==0) printf("NONE\n");
    }
    return 0;

}