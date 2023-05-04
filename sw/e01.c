#include <stdio.h>

int h(int tmp, int g, int ans[], int i)
{
	if (tmp >= g){
		ans[i] = tmp / g;
		tmp = tmp % g;
	}
	else {
		ans[i] = 0;
	}
	return tmp;
}

int main(void)
{
	int s, t, tmp;
	int ans[6];
	int table[] = {500, 100, 50, 10, 5, 1};
	printf("購入金額 = "); scanf("%d", &s);
	printf("投入金額 = "); scanf("%d", &t);
	tmp = t - s;
	if (tmp < 0) {
		printf("お金が足りません\n");
		return 0;
	}
	else{
		printf("お釣りは%d円です。\n", tmp);
		for (int i = 0; i < 6; i++){
			tmp = h(tmp, table[i], ans, i);
		}
	}
	for (int i = 0; i < 6; i++){
		if (ans[i] != 0){
			printf("%3d円 = %d枚\n", table[i], ans[i]);
		}
	}
	return 0;
}
