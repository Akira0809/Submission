#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
	int ans[4], flag;
	printf("数字生成中...\n");
	for (int i = 0; i < 4; i++){
		srand((unsigned int)time(NULL));
		int n = rand() % 9 + 1;
		flag = 0;
		for (int j = 0; j < i; j++){
			if (ans[j] == n){
				flag = 1;
				break;
			} 
		}
		if (flag == 0) ans[i] = n;
		else i--;
		sleep(1);
	}
	printf("数字生成完了\n");	
	int index = 0;
	while(1){
		index++;
		int input[4];
		printf("%d回目 = ", index); 
		for (int i = 0; i < 4; i++){
			char tmp;
			scanf(" %c", &tmp);
			input[i] = tmp - '0';
		}
		int hit = 0, blow = 0;
		for (int i = 0; i < 4; i++){
			if (ans[i] == input[i]) hit++;
			for (int j = 0; j < 4; j++){
				if (ans[i] == input[j]){
					blow++;
					break;
				}
			}
		}
		if (hit == 4){
			printf("BINGO!\n");
			return 0;
		}
		printf("HIT:%d BLOW:%d\n", hit, blow-hit);
	}
}


/* 動作例 */
/*
数字生成中...
数字生成完了
1回目 = 1234
HIT:0 BLOW:2
2回目 = 2345
HIT:1 BLOW:1
3回目 = 1245
HIT:1 BLOW:2
4回目 = 1256
HIT:0 BLOW:2
5回目 = 1235
HIT:0 BLOW:2
6回目 = 1245
HIT:1 BLOW:2
7回目 = 2145
HIT:2 BLOW:1
8回目 = 3145
HIT:2 BLOW:1
9回目 = 5142
HIT:3 BLOW:0
10回目 = 5143
HIT:3 BLOW:0
11回目 = 5144
HIT:3 BLOW:0
12回目 = 5146
HIT:3 BLOW:0
13回目 = 5147
HIT:3 BLOW:0
14回目 = 5148
BINGO!
*/
