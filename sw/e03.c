#include <stdio.h>

int main(void)
{
	char s[100];
	FILE *fp;
	printf("入力ファイル = "); scanf("%s", s);
	fp = fopen(s, "r");
	if (fp == NULL){
		printf("ファイルがありません。\n");
		return 1;
	}
	int n, tmp;
	fscanf(fp, "%d", &n);
	int t[n];
	for (int i = 0; i < n; i++){
		t[i] = i + 1;
	}
	while(fscanf(fp, "%d", &tmp) != EOF){
		for (int i = 0; i < n; i++){
			if (t[i] == tmp){
				t[i] = -1;
			}
		}
	}
	fclose(fp);
	for (int i = 0; i < n; i++){
		if (t[i] != -1) printf("%2d番\n", t[i]);
	}
	return 0;
}
