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

enum {
	SUMMER,
	WINTER,
};

//プロトタイプ宣言
int GetTotalOlympic(int season);
void PrintYearOrimpic(int season);
void PrintResult();

void main()
{
	PrintResult();	
}

int GetTotalOlympic(int season)
{
	int totalOrimpic = 0;
	
	for (int i = ORIMPIC_START_YEAR; i <= CURRENT_YEAR; i++) {
		if (season == SUMMER) {
			if (i % ORIMPIC_CHECK == 0 && i != NOT_HELD_ORIMPIC) {
				totalOrimpic++;
			}
		}

		if (season == WINTER) {
			if (i % ORIMPIC_CHECK == 2 && i != NOT_HELD_ORIMPIC) {
				totalOrimpic++;
			}
		}
	}
	return totalOrimpic;
}


void PrintYearOrimpic(int season) {
	int yearOrimpic[ARRAY_ORIMPIC] = { 0 };
	int arrayIndex = 0;
	for (int i = ORIMPIC_START_YEAR; i < CURRENT_YEAR; i++) {
		if (season == SUMMER) {
			if (i % ORIMPIC_CHECK == 0) {
				yearOrimpic[arrayIndex] += i;
				printf("%d\n", yearOrimpic[arrayIndex]);
				arrayIndex++;
			}
		}
		
		if (season == WINTER) {
			if (i % ORIMPIC_CHECK == 2) {
				yearOrimpic[arrayIndex] += i;
				printf("%d\n", yearOrimpic[arrayIndex]);
				arrayIndex++;
			}
		}


	}

}

void PrintResult() {
	printf("夏季オリンピックを開催した回数の合計：%d\n", GetTotalOlympic(SUMMER));
	printf("夏季オリンピックが開催された年：\n");
	PrintYearOrimpic(SUMMER);
	printf("\n\n");
	
	printf("冬季オリンピックを開催した回数の合計：%d\n", GetTotalOlympic(WINTER));
	printf("冬季オリンピックが開催された年：\n");
	PrintYearOrimpic(WINTER);
}

