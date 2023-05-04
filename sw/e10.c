#include <stdio.h>
#include <string.h>

int judge(char s[], char t[], int i, int j)
{
	int sum = 0;
	while (1){
		if(s[i] == t[j]){
			i++;
			j++;
			sum++;	
		}
		else break;
	}
	return sum;
}

int main(void)
{
	char fname[20];
	FILE *fp;
	printf("ファイル名 = "); scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL){
		printf("ファイルがありません\n");
		return 1;
	}
	char s[4000], t[4000];
	fscanf(fp, "%s%s", s, t);
	fclose(fp);
	int max = 0, tmp = 0, S = strlen(s), T = strlen(t);
	for (int i = 0; i < S; i++){
		for (int j = 0; j < T; j++){
			if (s[i] == t[j]){
				tmp = judge(s, t, i, j);
				if (tmp > max){
					max = tmp;
				}
				if (max >= S/2){
					printf("%d\n", max);
					return 0;
				}
			}
		}
	}
	printf("%d\n", max);
	return 0;
}
