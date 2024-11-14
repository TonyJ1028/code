#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    scanf("%d", &m);

    int matrix[m][m];
    for (int line = 0; line < m; line++)
    {
        for (int column = 0; column < m; column++)
        {
            scanf("%d", &matrix[line][column]);
        }
    }

    int sum[2 * m + 2];
    // 初始化数组元素为0
    for (int i = 0; i < 2 * m + 2; i++) 
    {
        sum[i] = 0;
    }

    for (int line = 0; line < m; line++)
    {
        for (int column = 0; column < m; column++)
        {
            sum[line] += matrix[line][column];  // 计算每一行的和
        }
    }

    for (int column = 0; column < m; column++)
    {
        for (int line = 0; line < m; line++)
        {
            sum[m + column] += matrix[line][column];  // 计算每一列的和
        }
    }

    // 主对角线求和
    for (int coordinate = 0; coordinate < m; coordinate++)
    {
        sum[2 * m] += matrix[coordinate][coordinate];
    }

    // 辅对角线求和
    for (int coordinate = 0; coordinate < m; coordinate++)
    {
        sum[2 * m + 1] += matrix[coordinate][m - coordinate - 1];
    }

    // 从大到小排序
    for (int i = 0; i < 2 * m + 1; i++)
    {
        for (int j = 0; j < 2 * m + 1 - i; j++)
        {
            if (sum[j] < sum[j + 1])
            {
                int temp = sum[j];
                sum[j] = sum[j + 1];
                sum[j + 1] = temp;
            }
        }
    }

    // 输出结果
    for (int i = 0; i < 2 * m + 2; i++)
    {
        printf("%d ", sum[i]);
    }

    printf("\n");

    return 0;
}
