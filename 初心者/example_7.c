/*
 * goto文について説明しなくてもわかると思います。
 * 注意すべき点は、gotoを多用してしまうと、スパゲッティコードになることです。
 * 最近では、あまり見かけませんね。
 */

#include <stdio.h>

int main() {
    int n;
    printf("0か1のどれかを入力してください。\n");
    scanf("%d", &n);
    if (n == 0) {
        goto hata1;
    }
    else if (n == 1) {
        goto hata2;
    }
    else {
        goto hata3;
    }
    
hata1:
    printf("0が入力されました。\n");
    goto hata4;
    
hata2:
    printf("1が入力されました。\n");
    goto hata4;
    
hata3:
    printf("0,1以外の数値が入力あれました。");
    goto hata4;
    
hata4:
    return 0;
}
