#include <stdio.h>

int main() {
    int n;
    printf("1,2,3,4,5までの数を入力してください。\n");
    scanf("%d", n);
    
    /* switch文はif文の==に特化したやつでですね。 */
    switch (n) {
        case 1:
            printf("1が入力されました。\n");
            break;
        case 2:
            printf("2が入力されました。\n");
            break;
        case 3:
            printf("3が入力されました。\n");
            break;
        case 4:
            printf("4が入力されました。\n");
            break;
        case 5:
            printf("5が入力されました。\n");
            break;
        default:
            printf("それ以外の数が入力されました。\n");
            break;
    }
    
    return 0;
}
