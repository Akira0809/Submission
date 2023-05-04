#include <stdio.h>

int main(void)
{
	char fname[20];
	FILE *fp;
	printf("入力ファイル名 = "); scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL){
		printf("ファイルが見つかれません\n");
		return 1;
	}
	int w[10], k[10];
	int tmp;
	for (int i = 0; i < 10; i++){
		fscanf(fp, "%d", &tmp);
		w[i] = tmp;
	}
	for (int i = 0; i < 10; i++){
		fscanf(fp, "%d", &tmp);
		k[i] = tmp;
	}
	fclose(fp);
	int wmax = 0, windex, kindex, kmax = 0, W = 0, K = 0;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 10; j++){
			if (wmax < w[j]){
				wmax = w[j];
				windex = j;
			}	
			if (kmax < k[j]){
				kmax = k[j];
				kindex = j;
			}
		}
		W += wmax;
		K += kmax;
		w[windex] = -1;
		k[kindex] = -1;
		wmax = 0;
		kmax = 0;
	}
	printf("W大学 = %d点\n", W);
	printf("K大学 = %d点\n", K);
	if (W < K) printf("K大学の勝利!!\n");
	else if (W > K) printf("W大学の勝利!!\n");
	else printf("引き分けです\n");
	return 0;
}


/* 実行結果 */

/*
08data01.txt
W大学 = 66点
K大学 = 61点
W大学の勝利!!

08data02.txt
W大学 = 240点
K大学 = 250点
K大学の勝利!!

08data03.txt
W大学 = 283点
K大学 = 293点
K大学の勝利!!

08data04.txt
W大学 = 259点
K大学 = 259点
引き分けです

08data05.txt
W大学 = 259点
K大学 = 224点
W大学の勝利!!
*/
