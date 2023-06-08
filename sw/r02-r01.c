#include <stdio.h>

int a, b;
int c = 100, d = 200;

int main(void)
{
	int e, f;
	int g = 10, h = 20;

	int *pa = &a, *pb = &b, *pc = &c, *pd = &d, *pe = &e, *pf = &f, *pg = &g, *ph = &h;

	printf("*a: %p a: %d\n", pa, *pa);
	printf("*b: %p b: %d\n", pb, *pb);
	printf("*c: %p c: %d\n", pc, *pc);
	printf("*d: %p d: %d\n", pd, *pd);
	printf("*e: %p e: %d\n", pe, *pe);
	printf("*f: %p f: %d\n", pf, *pf);
	printf("*g: %p g: %d\n", pg, *pg);
	printf("*h: %p h: %d\n", ph, *ph);

	return 0;
}

/* 実行結果
*a: 0x556c295b7020 a: 0
*b: 0x556c295b701c b: 0
*c: 0x556c295b7010 c: 100
*d: 0x556c295b7014 d: 200
*e: 0x7fffa8ae7378 e: 240
*f: 0x7fffa8ae737c f: 0
*g: 0x7fffa8ae7380 g: 10
*h: 0x7fffa8ae7384 h: 20
*/
