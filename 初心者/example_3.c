#include <stdio.h>

/* voidは省略可 */
int main() {
    int n;
    printf("数値を入力してください。\n");
    scanf("%d", &n);
  
    /* if文は制御文の一つでstdio.hをインクルードしなくてもいいです。
       括弧の中には条件式が入り、その条件が当てはまると、下の行のコードが実行されます。*/
    if (n > 0) {
        printf("正の数が入力されました。\n");
    }
    else if (n < 0) {
        printf("負の数が入力されました。\n");
    }
    else {// else は上の条件が全て当てはまらなかったときに実行されます。
        printf("0を入力しました。\n");
    }
  
    return 0;
}
