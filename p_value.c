#include <stdio.h>

void func(int*);

int main(void) {
    int value = 1;
        printf("&value = %p\n", &value);
    func(&value); //アドレスを渡す
    printf("value = %d\n", value);
    return 0;
}

void func(int *p_value) {
    printf("p_value = %p\n", p_value);
    *p_value = 10; //ノーマル変数状態にして代入
    return;
}
