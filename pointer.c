#include <stdio.h>　
int x, y;
int *xp, *yp;
int tri(int,int);

int main(void) {
    x = 10;
    y = 5;
    xp = &x; //アドレスを代入
    yp = &y;

    printf("%d,%d\n", x, y);
    printf("1回目の処理 %d\n",tri(x, y));

    printf("%d,%d\n", x, y);
    printf("2回目の処理 %d\n", tri(x, y));

    return 0;
}

int tri(int width, int hight) {
    int res;

    *xp = width + 1; //ポインタ変数の値を変更
    *yp = hight + 1;

    res = (width * hight) / 2;
    return res;
}
