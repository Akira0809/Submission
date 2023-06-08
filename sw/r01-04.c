#include <stdio.h>

int main()
{
	int d[3][4];

	printf("d       : %u byte\n", sizeof(d));
	printf("d[1]    : %u byte\n", sizeof(d[1]));
	printf("d[1][3] : %u byte\n", sizeof(d[1][3]));

	return 0;
}

/* 実行結果
d       : 48 byte
d[1]    : 16 byte
d[1][3] : 4 byte
*/
