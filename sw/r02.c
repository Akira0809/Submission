#include <stdio.h>

int main()
{
	printf("char          %u byte\n", sizeof(char));
	printf("int	      %u byte\n", sizeof(int));
	printf("float  	      %u byte\n", sizeof(float));
	printf("double 	      %u byte\n", sizeof(double));
	printf("short int     %u byte\n", sizeof(short int));
	printf("long int      %u byte\n", sizeof(long int));
	printf("unsigned int  %u byte\n", sizeof(unsigned int));
	printf("long long int %u byte\n", sizeof(long long int));

	return 0;
}

/* 実行結果
char          1 byte
int	      4 byte
float  	      4 byte
double 	      8 byte
short int     2 byte
long int      8 byte
unsigned int  4 byte
long long int 8 byte
*/
