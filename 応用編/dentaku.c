#include <stdio.h>

void help() {
    puts("どれか一つ選んでください。");
    puts("1. 足し算");
    puts("2. 引き算");
    puts("3. 掛け算");
    puts("4. 割り算");
    printf(":");
}

int main(void) {
    int n, a, b;
    help();
    scanf("%d", &n);
    switch (n) {
        case 1:
            printf("数値を2つ半角スペースをおいて入力してください。\n");
            scanf("%d %d", &a, &b);
            printf("答え: %d\n", a + b);
            break;
        case 2:
            printf("数値を2つ半角スペースをおいて入力してください。\n");
            scanf("%d %d", &a, &b);
            printf("答え: %d\n", a - b);
            break;
        case 3:
            printf("数値を2つ半角スペースをおいて入力してください。\n");
            scanf("%d %d", &a, &b);
            printf("答え: %d\n", a * b);
            break;
        case 4:
            printf("数値を2つ半角スペースをおいて入力してください。\n");
            scanf("%d %d", &a, &b);
            printf("答え: %d\n", a / b);
            break;
        default:
            printf("そんなものはありません。\n");
            return 1;
    }
    return 0;
}
