#include <stdio.h>

#if 0
上記ソースを利用して、1896年から現在まで、夏と冬のオリンピックが合計で何回開催されたのかを
出力するプログラムを作成してください。
またそれぞれで何年に開催されたのかを出力するプログラムを作成してください。
(1つのプロジェクトで作成して下さい。、必ず配列を使用してください。)
#endif

enum {
	ORIMPIC_CHECK = 4,
	CURRENT_YEAR = 2020,
	NOT_HELD_ORIMPIC = 2020,
	ORIMPIC_START_YEAR = 1896,
	ARRAY_ORIMPIC = 125,

};

//プロトタイプ宣言
int GetTotalOlympicInSummer();
int GetTotalOlympicInWinter();
int GetYearOrimpicSummer(int Index);
void PrintResult();


void main()
{
	PrintResult();	
}

int GetTotalOlympicInSummer() 
{
	int totalOrimpic = 0;
	for (int i = ORIMPIC_START_YEAR; i <= CURRENT_YEAR; i++) {
		if (i % ORIMPIC_CHECK == 0 && i != NOT_HELD_ORIMPIC) {
			totalOrimpic++;
		}

	}
	return totalOrimpic;
}

int GetTotalOlympicInWinter()
{
	int totalOrimpic = 0;
	for (int i = ORIMPIC_START_YEAR; i <= CURRENT_YEAR; i++) {
		if (i % ORIMPIC_CHECK == 2 && i != NOT_HELD_ORIMPIC) {
			totalOrimpic++;
		}

	}
	return totalOrimpic;
}

int GetYearOrimpicSummer(int Index)
{
	int yearSummerOrimpic[ARRAY_ORIMPIC] = { 0 };
	int arrayIndexSummer = 0;
	for (int i = ORIMPIC_START_YEAR; i < CURRENT_YEAR; i++) {
		if (i % ORIMPIC_CHECK == 0) {
			yearSummerOrimpic[arrayIndexSummer] += i;
			arrayIndexSummer++;
		}
	}
	return yearSummerOrimpic[Index];
}

int GetYearOrimpicWinter(int Index)
{
	int yearWinterOrimpic[ARRAY_ORIMPIC] = { 0 };
	int arrayIndexWinter = 0;
	for (int i = ORIMPIC_START_YEAR; i < CURRENT_YEAR; i++) {
		if (i % ORIMPIC_CHECK == 2) {
			yearWinterOrimpic[arrayIndexWinter] += i;
			arrayIndexWinter++;
		}
	}
	return yearWinterOrimpic[Index];
}



void PrintResult() {
	printf("夏季オリンピックを開催した回数の合計：%d\n", GetTotalOlympicInSummer());
	printf("夏季オリンピックが開催された年：\n");
	for (int i = 0; i < GetTotalOlympicInSummer(); i++) {
		printf("%d\n", GetYearOrimpicSummer(i));
	}
	
	printf("冬季オリンピックを開催した回数の合計：%d\n", GetTotalOlympicInWinter());
	printf("冬季オリンピックが開催された年：\n");
	for (int i = 0; i < GetTotalOlympicInWinter(); i++) {
		printf("%d\n", GetYearOrimpicWinter(i));
	}
}




