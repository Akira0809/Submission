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
	char s[4001], t[4001];
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
			}
		}
	}
	printf("%d\n", max);
	return 0;
}


/* 実行結果
10data01.txt 5
10data02.txt 0
10data03.txt 12
10data04.txt 31
10data05.txt 719
10data06.txt 3995
10data07.txt 0
*/
