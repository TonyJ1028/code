// 编写函数fun，该函数的功能是求出小于等于x(x<=1000)的所有素数放在数组y中，素数的个数由函数返回。
// 主函数中输入整数x，调用函数，输出所有素数的个数并列出所有素数

// 输入说明：输入一个整数x

// 输出说明：共两行，第一行输出小于等于x的所有素数的个数
//           第二行输出满足条件的素数，用空格分隔

// 输入示例：10

// 输出示例：4
//           2 3 5 7
#include<stdio.h>
int primes(int primes[1000], int x);
int main()
{
    int x;
    scanf("%d",&x);

    int y[1000];
    for(int i = 0; i < 1000; i++)
    {
        y[i] = 0;
    }
    int num = primes(y,x);
    printf("%d\n",num);
    for(int i = 0; i < 1000; i++)
    {
        if(y[i] == 0)
        {
            break;
        }
        printf("%d ",y[i]);
    }
    printf("\n");
    return 0;
}

int primes(int primes[1000], int x)
{
    int num = 0;
    for(int i = 2; i <= x; i++)
    {
        for(int j = 1; j < i ; j++)
        {
            if(i % j == 0 && j != 1)
            {
                break;
            }
            if(j == i - 1 )
            {
                for(int k = 0; k < 1000; k++)
                {
                    if(primes[k] == 0)
                    {
                        primes[k] = i;
                        break;
                    }
                }
                num++;
            }
        }
    }
    return num;
}
