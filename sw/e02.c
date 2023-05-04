#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n, c = 0;
	printf("クラス人数 = "); scanf("%d", &n);
	int t[n];
	for (int i = 0; i < n; i++){
		t[i] = i + 1;
	}
	srand((unsigned int)time(NULL));
	while (c < n){
		int tmp = 0 + rand() % n;
		if (t[tmp] != -1){
			printf("%d\n", t[tmp]);
			t[tmp] = -1;
			c++;
		}
	}
	return 0;
}
