#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int board[n][m];
    int board_final[n][m]; // 用于存储最终结果

    // 初始化棋盘并同时备份棋盘数据
    for (int line = 0; line < n; line++) {
        for (int column = 0; column < m; column++) {
            scanf("%d", &board[line][column]);
            board_final[line][column] = board[line][column]; // 初始化最终结果为原始状态
        }
    }

    // 水平（行）消除检查
    for (int line = 0; line < n; line++) {
        for (int column = 0; column <= m - 3; column++) {
            if (board[line][column] == board[line][column + 1] &&
                board[line][column] == board[line][column + 2]) {
                // 设置消除状态
                board_final[line][column] = 0;
                board_final[line][column + 1] = 0;
                board_final[line][column + 2] = 0;
                // 向右扩展
                for (int k = column + 3; k < m && board[line][k] == board[line][column]; k++) {
                    board_final[line][k] = 0;
                }
            }
        }
    }

    // 纵向（列）消除检查
    for (int column = 0; column < m; column++) {
        for (int line = 0; line <= n - 3; line++) {
            if (board[line][column] == board[line + 1][column] &&
                board[line][column] == board[line + 2][column]) {
                // 设置消除状态
                board_final[line][column] = 0;
                board_final[line + 1][column] = 0;
                board_final[line + 2][column] = 0;
                // 向下扩展
                for (int k = line + 3; k < n && board[k][column] == board[line][column]; k++) {
                    board_final[k][column] = 0;
                }
            }
        }
    }

    // 输出最终棋盘结果
    for (int line = 0; line < n; line++) {
        for (int column = 0; column < m; column++) {
            printf("%d ", board_final[line][column]);
        }
        printf("\n");
    }

    return 0;
}
