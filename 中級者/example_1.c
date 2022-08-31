#include <stdio.h>

/*関数ですね。基本的に数学と考え方は同じです。*/
int test(int a, int b) {
    return a + b;
}

int main() {
    printf("1 + 1 = %d\n", test(1, 1));
    return 0;
}
