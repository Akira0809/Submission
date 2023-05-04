#include <stdio.h>

int main(void)
{
	int n, p, c = 0, s = 0;
	printf("n = "); scanf("%d", &n);
	printf("p = "); scanf("%d", &p);
	int t[n];
	for (int i = 0; i < n; i++) t[i] = 0;
	while (1){
		for (int i = 0; i < n; i++){
			if (p == 0){
				p = t[i];
				t[i] = 0;
				s++;
				continue;
			}
			p--;
			t[i]++;
			s++;
			if (p == 0){
				for (int j = 0; j < n; j++){
					if (t[j] == 0) c++;
				}	
				if (c == n-1){
					printf("%d番が勝者\n", i);
					printf("%dステップ目で終了\n", s);
					return 0;
				}
				c = 0;
			}
		}
	}
	return 0;
}
