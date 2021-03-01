/*
----------------------------------------
参考サイト
----------------------------------------
http://psa2.kuciv.kyoto-u.ac.jp/staff/susaki/c/struct1.html
*/

/*
----------------------------------------
勉強内容
----------------------------------------
・名前付きのenumとdefineの定義
・名前付きの構造体の宣言・定義
・構造体配列の定義
・関数化
・キャスト
・構造体配列を関数に渡す
*/

/*
----------------------------------------
出力結果
----------------------------------------
佐藤 : 英語 = 82   数学 = 72   国語 = 58
秋山 : 英語 = 77   数学 = 82   国語 = 79
永田 : 英語 = 52   数学 = 62   国語 = 39
藤田 : 英語 = 61   数学 = 82   国語 = 88
*/

#include <stdio.h>
#define NAME_SIZE 10
#define TOTAL_SUBJECT 3

typedef enum {
	SATO,
	AKIYAMA,
	NAGATA,
	FUJITA,
	NUM_OF_STUDENT
}STUDENT_NAME;

//1人分の成績
typedef struct {
	char name[NAME_SIZE];
	int pEnglish;
	int pMath;
	int pJapanese;
	float pAverage;
}RESULT_STUDENT;

//プロトタイプ宣言
void calcAverage(RESULT_STUDENT* studentResult); //各生徒の点数の平均を求めて成績データの構造体に代入する関数。引数：成績データの構造体
void printStudentResult(RESULT_STUDENT* studentResult); //成績を表示する関数。引数：成績データの構造体

void main()
{
	RESULT_STUDENT studentResult[NUM_OF_STUDENT] = {
		{ "佐藤",82,72,58 },
		{ "秋山",77,82,79 },
		{ "永田",61,82,88 },
		{ "藤田",52,62,39 },
	};

	//各生徒の点数の平均を求めて成績データの構造体に代入する関数を呼び出す。
	calcAverage(studentResult);

	//成績を表示する関数を呼び出す。
	printStudentResult(studentResult);
}


//各生徒の点数の平均を求めて成績データの構造体に代入する関数。引数：成績データの構造体
void calcAverage(RESULT_STUDENT* studentResult)
{
	for (int i = 0; i < NUM_OF_STUDENT; i++) {
		//studentResult[i].pAverage = 
		(studentResult + i)->pAverage =
		(((float)studentResult[i].pEnglish + (float)studentResult[i].pMath + (float)studentResult[i].pJapanese) / TOTAL_SUBJECT);
	}
}



//成績を表示する関数。引数：成績データの構造体
void printStudentResult(RESULT_STUDENT* studentResult)
 {
	for (int i = 0; i < NUM_OF_STUDENT; i++) {
		printf("%s：", (studentResult+i)->name);
		printf("英語 = %d,  ", (studentResult+i)->pEnglish);
		printf("数学 = %d,  ", (studentResult+i)->pMath);
		printf("国語 = %d,  ", (studentResult+i)->pJapanese);
		printf("平均 = %.2f\n", (studentResult + i)->pAverage);
	}
}