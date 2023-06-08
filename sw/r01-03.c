#include <stdio.h>

int main()
{
	char a[10];
	int b[5];
	double c[8];

	printf("a: %u byte\n", sizeof(a));
	printf("b: %u byte\n", sizeof(b));
	printf("c: %u byte\n", sizeof(c));

	printf("a[0]: %u byte\n", sizeof(a[0]));
	printf("b[2]: %u byte\n", sizeof(b[2]));
	printf("c[5]: %u byte\n", sizeof(c[5]));

	return 0;
}


/* 実行結果
a: 10 byte
b: 20 byte
c: 64 byte
a[0]: 1 byte
b[2]: 4 byte
c[5]: 8 byte
*/
