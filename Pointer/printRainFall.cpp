/*
----------------------------------------------------------
参考サイト
----------------------------------------------------------
http://kitako.tokyo/lib/CExercise.aspx?id=10
練習問題10-2
*/

/*
----------------------------------------------------------
問題
----------------------------------------------------------
何月であるかを表す数値（1～12）と降水量(整数：mm)をメンバーとする構造体を定義し、
４ヵ月分の月と降水量を入力して表示するプログラムを作成しなさい。
*/

/*
----------------------------------------------------------
出力結果
----------------------------------------------------------
1月   49mm
2月   60mm
3月  115mm
4月  130mm
*/

#define _CRT_SECURE_NO_WARNINGS

#define TOTAL_PRINT_MONTH 4

//構造体
typedef struct monthlyRainFall {
	int month;
	int rainFall;
}MONTHLY_RAIN_FALL;

//プロトタイプ宣言
void inputData(MONTHLY_RAIN_FALL* data);
void printData(MONTHLY_RAIN_FALL* data);


#include <stdio.h>

void main()
{
	MONTHLY_RAIN_FALL data[TOTAL_PRINT_MONTH];

	inputData(data); 
	printData(data);

}

void inputData(MONTHLY_RAIN_FALL* data)   //4か月分の降水量を入力する関数。引数：月と降水量の構造体配列。
{
	for (int i = 0; i < TOTAL_PRINT_MONTH; i++) {
		printf("月を入力してください。:");
		scanf("%d", &data[i].month);
		printf("降水量を入力してください。:");
		scanf("%d", &data[i].rainFall);
	}
}

void printData(MONTHLY_RAIN_FALL* data)  //4か月分の降水量を表示する関数。引数：月と降水量の値が入った構造体配列。
{
	for (int i = 0; i < TOTAL_PRINT_MONTH; i++) {
		//printf("%2d月　　%dmm\n", data[i].month, data[i].month);
		printf("%2d月　%3dmm\n", (data + i)->month, (data + i)->rainFall);
	}
}