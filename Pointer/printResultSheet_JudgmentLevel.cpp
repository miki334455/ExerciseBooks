/*
----------------------------------------------------------
参考サイト
----------------------------------------------------------
http://kitako.tokyo/lib/CExercise.aspx?id=10
練習問題10-4
*/

/*
----------------------------------------------------------
問題
----------------------------------------------------------
学生の試験結果を表す、次のメンバーを持った構造体を定義する。
・名前（char型配列）
・試験の得点（int型）
・成績評価（char型）
成績評価を設定する関数を定義する。
・作成した構造体のポインタを引数とする。
・試験の得点によって成績評価に文字を設定する。
	80点以上→'A'、70点以上→'B'、60点以上→'C'、60点未満→'D'
作成した構造体の変数に、名前と試験の得点を入力する。
作成した関数によって、成績評価を設定する。
構造体の内容（名前、試験の得点、成績評価）を表示する。
*/

#define NUM_OF_NAME 100

enum level {
	LEVEL_A = 80,
	LEVEL_B = 70,
	LEVEL_C = 60
};

typedef struct resultSheet {
	char name[NUM_OF_NAME];
	int point;
	char level;
}RESULT_SHEET;


//プロトタイプ宣言
void inputNamePoint(RESULT_SHEET* resultSheet);
void judgmentLevel(RESULT_SHEET* resultSheet);
void PrintResultSheet(RESULT_SHEET* resultSheet);


#include <stdio.h>

void main() 
{
	RESULT_SHEET resultSheet;

	inputNamePoint(&resultSheet);
	judgmentLevel(&resultSheet);
	PrintResultSheet(&resultSheet);
}



void inputNamePoint(RESULT_SHEET* resultSheet)  //名前と得点を入力する関数。 引数：名前・得点・レベルが入る構造体変数。
{
	printf("名前は？\n");
	scanf("%s", &resultSheet->name);
	printf("得点は？\n");
	scanf("%d", &resultSheet->point);
}

void judgmentLevel(RESULT_SHEET* resultSheet)   //得点によってレベルを判定し、メンバ変数(level)に文字を設定する。引数：名前・得点・レベルが入る構造体変数。
{
	if (resultSheet->point >= LEVEL_A) {
		resultSheet->level = 'A';
	}
	else if (resultSheet->point >= LEVEL_B) {
		resultSheet->level = 'B';

	}
	else if (resultSheet->point >= LEVEL_C) {
		resultSheet->level = 'C';
	}
	else {
		resultSheet->level = 'D';
	}
}

void PrintResultSheet(RESULT_SHEET* resultSheet) //名前・得点・レベルを表示する関数。　引数：名前・得点・レベルが入る構造体変数。
{
	printf("%s,%d,%c\n", resultSheet->name, resultSheet->point, resultSheet->level);
}