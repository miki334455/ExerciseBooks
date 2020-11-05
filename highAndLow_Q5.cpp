#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


int GetRandom(int min, int max) 
{
	//return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX)); //原本 +1しているのはなぜ？　オーバーフローするって出る。
	return min + (int)(rand() % (max - min + 1) ); //代替案

	//return min + (int)(RAND_MAX * (max - min ) / ( RAND_MAX));   //最大値
	//return min + (int)(0 * (max - min ) / (  RAND_MAX));         //最小値

}

//https://docs.microsoft.com/ja-jp/cpp/c-runtime-library/reference/rand?view=msvc-160
//int rand( void ); 
//Rand関数は、0 ~ RAND_MAX (32767) の範囲で、擬似乱数の整数を返します。




int  main()
{

#if 1
	int x = 0;
	int y = 0;

	while (1) {
		x = GetRandom(1, 13);//1～13までのランダムな値が1つ代入される。

		printf("1～13までの好きな数字を入力してください。\n");
		scanf("%d", &y);
		printf("\n");

		if (y > x) {
			printf("You:%d, Computer:%d\n", y, x);
			printf("あなたが入力した数の方が大きいです。\n");
		}
		else if (y < x) {
			printf("You:%d, Computer:%d\n", y, x);
			printf("あなたが入力した数の方が小さいです。\n");
		}
		else {
			printf("You:%d, Computer:%d\n", y, x);
			printf("あなたが入力した数と同じです。\n");
		}
	}

#endif

	return 0;
}