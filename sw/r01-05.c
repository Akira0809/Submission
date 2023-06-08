#include <stdio.h>

int main()
{
	printf("100 	   %u byte\n", sizeof(100));
	printf("100L 	   %u byte\n", sizeof(100L));
	printf("3.14 	   %u byte\n", sizeof(3.14));
        printf("3.14f 	   %u byte\n", sizeof(3.14f));
	printf("'A'        %u byte\n", sizeof('A'));
        printf("abcdef     %u byte\n", sizeof("abcdef"));

	return 0;
}

/* 実行結果
100 	   4 byte
100L 	   8 byte
3.14 	   8 byte
3.14f 	   4 byte
'A'        4 byte
abcdef     7 byte
*/
