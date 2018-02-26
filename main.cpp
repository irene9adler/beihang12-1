//北航12年第一题
/*某些整数能分解成若干个连续整数的和的形式，例如
    15 = 1 + 2＋3＋4＋5　
    15 = 4 + 5 + 6
    15 = 7 + 8
某些整数不能分解为连续整数的和，例如：16
输入：一个整数N（N <= 10000）
输出：整数N对应的所有分解组合，按照每个分解中的最小整数从小到大输出，每个分解占一行，每个数字之间有一个空格
（每行最后保留一个空格）；如果没有任何分解组合，则输出NONE。
*/
#include <stdio.h>

int main()
{
    int r;
    //任何可以进行分解的整数，必然满足(m+n)(n-m+1)/2的形式 ?????
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
