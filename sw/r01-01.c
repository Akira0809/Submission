#include <stdio.h>

int main()
{
	char a;
	int b;
	float c;
	double d;
	
	printf("a: %d byte\n", sizeof(a));
	printf("b: %d byte\n", sizeof(b));
	printf("c: %d byte\n", sizeof(c));
	printf("d: %d byte\n", sizeof(d));

	return 0;
}

/* 実行結果
a: 1 byte
b: 4 byte
c: 4 byte
d: 8 byte
*/
