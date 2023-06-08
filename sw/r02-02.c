#include <stdio.h>
#include <math.h>

int main()
{
	int a;

	printf("&a = %u byte\n", sizeof(&a));
	printf("%.0f byte\n", pow(16, sizeof(&a)*2));

	return 0;
}

/* 実行結果
&a = 8 byte
18446744073709551616 byte
*/
