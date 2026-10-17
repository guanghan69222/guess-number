#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned)time(NULL));      /* 用当前时间做随机种子 */
    int answer = rand() % 100 + 1;    /* 生成 1~100 的答案 */
    int guess = 0;
    int tries = 0;

    printf("我想了一个 1 到 100 之间的整数，你猜是多少？\n");

    while (1) {
        printf("请输入你的猜测（1-100）：");
        if (scanf("%d", &guess) != 1) {
            printf("输入的不是数字，退出。\n");
            return 1;
        }
        tries++;

        if (guess < 1 || guess > 100) {
            printf("超出范围了，请重新输入。\n");
        } else if (guess < answer) {
            printf("小了！\n");
        } else if (guess > answer) {
            printf("大了！\n");
        } else {
            printf("猜对了！答案就是 %d，你用了 %d 次。\n", answer, tries);
            break;
        }
    }
    return 0;
}
