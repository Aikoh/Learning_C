#include <stdio.h>

int main(void){
  char moji = '0';
  int num;
  if (moji >= '0' && moji <='9'){
    num = moji - '0';
  }else{
    num = 0;
  }
  printf("%d\n",num);
  return 0;
}
