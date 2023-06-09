#include <math.h>
#include <stdio.h>
#include <time.h>		// for clock()

#define N 1000000		// nの上限
#define STEP (N/1000)	// 経過表示のステップ数

int is_prime(int a);				// 関数is_prime()のプロトタイプ宣言
int num_primes(int a, int b);		// 関数num_primes()のプロトタイプ宣言

// main関数
int main(void)
{	
	clock_t start = clock();	// 開始時間
	int n, m=0;

	// nを1～Nまで変化させる
	for (n=1; n<=N; n++) {

		// nより大きく2n以下の範囲に素数が0個であれば
		//「不成立」と表示して終了
		if (num_primes(n+1, 2*n)==0) {
			printf("定理は不成立!!\n");
			return 0;
		}

		// STEP毎に表示(進行の確認用)
		if(n-m>=STEP) {
			m += STEP;
			printf("n=%dまで成立 %f sec\n", m,
			    (double)(clock()-start)/CLOCKS_PER_SEC);
		}
	}

	printf("%dまでの正数で定理は成立\n", N);

	// 経過時間の表示
	printf("%f sec\n", (double)(clock()-start)/CLOCKS_PER_SEC);

	return 0;
}

//----------------------------------------------
// 引数aが素数かどうか判定する関数
//  返り値： 素数 1 , 素数以外 0
//----------------------------------------------
int is_prime(int n){
	double num = sqrt(n);
        for (int i = 3; i <= num; i+=2){
                if (n % i == 0) return 0;
        }
        return 1;
}
//----------------------------------------------
// a～bの範囲の素数の個数を返す関数
//----------------------------------------------
int num_primes(int a, int b)
{
	int i;
	double q;
	
	if (b < 2) return 0;
	if (a < 2) a = 2;
	if (a % 2 == 0) a++;	
	// a～bが素数か調べる
	for (i=a; i<=b; i+=2) {
		if (is_prime(i) == 1) return 1;
	}
}

/* 実行結果
1000000までの正数で定理は成立
2.495026
*/
