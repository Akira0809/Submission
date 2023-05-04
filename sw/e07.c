#include <stdio.h>

int main(void)
{
	char fname[20];
	FILE *fp;
	printf("入力ファイル名 = "); scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL){
		printf("ファイルが見つかりません\n");
		return 1;
	}	
	int n, m;
	fscanf(fp, "%d%d", &n, &m);
	int table[n], dice[m];
	for (int i = 0; i < n; i++){
		fscanf(fp, "%d", &table[i]);
	}
	for (int i = 0; i < m; i++){
		fscanf(fp, "%d", &dice[i]);
	}
	int ans = 0, now = 0;
	for (int i = 0; i < m; i++){
		ans++;
		now += dice[i];
		now += table[now];
		if (now < 0) now = 0;
		if (now >= n-1){
			printf("%d回\n", ans);
			return 0;
		}
	}
}

/* 動作結果 */
/*
07data00.txt 5回
07data01.txt 14回
07data02.txt 5回
07data03.txt 400回
07data04.txt 156回
07data05.txt 238回
*/
