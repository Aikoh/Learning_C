#include <stdio.h>

int main(void) {
    int i1, i2, i3;
    int array[10];
    printf(",i1=%p\n,i2=%p\n,i3=%p\n", &i1, &i2, &i3);
    printf("\narray=%p\n", array);
    printf("array[0]=%p\n", &array[0]);
    printf("array[1]=%p\n", &array[1]);
    printf("array[2]=%p\n", &array[2]);

    printf("array[9]=%p\n", &array[9]);

    return 0;
}
