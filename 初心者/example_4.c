#include <stdio.h>

/* 括弧を使ってスペースをなくすことができる。 */
int(main)() {
    /*for文はループを行う文で、
      int i = 0; は初期値
      i < 10; は継続値
      i++ は増幅値
      となっている。
      ちなみ、無限ループにするにはfor(;;)にするとできる。*/
    for (int i = 0; i < 10; i++) {
        printf("%d回目\n", i);
    }
    
    return 0;
}
