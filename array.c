#include <stdio.h>

int main(void){

  int i1, i2, i3;
  int array[10];
  printf(",i1=%p\n,i2=%p\n,i3=%p\n\n", &i1, &i2, &i3);

  printf("array=%p\n", array);
  for (int k=0; k<=9; k++){
    printf("array[%d]=%p\n",k,&array[k]);
  }

}
