#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char moji = 'A';
	int num;
	if (isdigit(moji)) {	//isdigit()関数で判定
		suuti = moji - '0';
	} else {
		num = 0;
	}
	printf("%d\n",num);
	return 0;
}
