#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char fn[20];
	FILE *fp;
	printf("ファイル名 = "); scanf("%s", fn);
	fp = fopen(fn, "r");
	if (fp == NULL){
		printf("ファイルがありません。\n");
		return 1;
	}
	int i = 0;
	char c, ans[140];
	while(fscanf(fp, "%c", &c) != EOF){
		if ('A' <= c && c <= 'Z'){
			if (c > 'E')
				ans[i] = c - 5;	
			else{
				ans[i] = 'V' + (c - 'A');
			}
		}
		else if ('a' <= c && c <= 'z'){
			if (c < 'x')
				ans[i] = c + 3;
			else
				ans[i] = 'a' + (c - 'x');
		}
		else if ('0' <= c && c <= '9'){
			int tmp, a;
			char q;
			tmp = c - '0';
			a = 9 - tmp;
			q = '0' + a;
			ans[i] = q;
		}
		else ans[i] = c;
		i++;
	}
	fclose(fp);
	printf("%s", ans);
	return 0;
}
