/*
----------------------------------------
参考サイト
----------------------------------------
http://psa2.kuciv.kyoto-u.ac.jp/staff/susaki/c/struct1.html
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
#define  NAME_SIZE 10

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
}RESULT_STUDENT;

//プロトタイプ宣言
void inStudentResult(RESULT_STUDENT* studentResult); //成績データを代入する関数。引数：成績データの構造体
void printStudentResult(RESULT_STUDENT* studentResult); //成績を表示する関数。引数：成績データの構造体

void main()
{
	RESULT_STUDENT studentResult[NUM_OF_STUDENT];

	//成績データを代入する関数を呼び出す。
	inStudentResult(studentResult);


	//成績を表示する関数を呼び出す。
	printStudentResult(studentResult);
}


//成績データを代入する関数。引数：成績データの構造体
void inStudentResult(RESULT_STUDENT* studentResult)
{
	for (int i = 0; i < NUM_OF_STUDENT; i++) {
		switch (i) {
		case SATO:
			studentResult[SATO] = { "佐藤",82,72,58 };
			break;

		case AKIYAMA:
			studentResult[AKIYAMA] = { "秋山",77,82,79 };
			break;

		case NAGATA:
			studentResult[NAGATA] = { "永田",61,82,88 };
			break;

		case FUJITA:
			studentResult[FUJITA] = { "藤田",52,62,39 };
			break;
		}
	}
}

//成績を表示する関数。引数：成績データの構造体
void printStudentResult(RESULT_STUDENT* studentResult)
 {
	for (int i = 0; i < NUM_OF_STUDENT; i++) {
		printf("%s：", studentResult[i].name);
		printf("英語 = %d,  ", studentResult[i].pEnglish);
		printf("数学 = %d,  ", studentResult[i].pMath);
		printf("国語 = %d\n", studentResult[i].pJapanese);
	}
}