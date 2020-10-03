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

void main()
{
	
	int yearSummerOrimpic[ARRAY_ORIMPIC] = { 0 };
	int yearWinterOrimpic[ARRAY_ORIMPIC] = { 0 };
	int notHeldOrimpic = 0;
	int totalSummerOrimpic = 0;
	int totalWinterOrimpic = 0;

#if 0
for (int i = ORIMPIC_START_YEAR; i <= CURRENT_YEAR; i++) {

		int test = i % 4;
		if ((i % 4) == 0) {
			totalSummerOrimpic++;
		}
	}
	printf("%d", totalSummerOrimpic);

#endif




#if 1
	//開催回数の合計
	for (int i = ORIMPIC_START_YEAR; i <= CURRENT_YEAR; i++) {
			if (i % ORIMPIC_CHECK == 0 && i!= NOT_HELD_ORIMPIC) {
				totalSummerOrimpic++;
			}
			else if (i % ORIMPIC_CHECK == 2) {
				totalWinterOrimpic++;
			}
			else if (i == CURRENT_YEAR) {
				notHeldOrimpic += i;
			}
			
	}

#if 1
	//開催した西暦を抽出する
	int arrayIndexSummer = 0;
	int arrayIndexWinter = 0;

	for (int i = ORIMPIC_START_YEAR; i < CURRENT_YEAR; i++) {
		if (i % ORIMPIC_CHECK == 0) {
			yearSummerOrimpic[arrayIndexSummer] += i;
			arrayIndexSummer++;
		}
		else if (i % ORIMPIC_CHECK == 2) {
			yearWinterOrimpic[arrayIndexWinter] += i;
			arrayIndexWinter++;
		}
		else {
			notHeldOrimpic += i;
		}
	
	}
#endif
	
	
	printf( "夏季オリンピックを開催した回数の合計：%d\n",totalSummerOrimpic);
	printf("夏季オリンピックが開催された年：\n" );
	for (int i = 0; i < totalSummerOrimpic; i++) {
		printf("%d\n", yearSummerOrimpic[i]);
	}
	printf("冬季オリンピックを開催した回数の合計：%d\n",totalWinterOrimpic);
	printf("冬季オリンピックが開催された年：\n");
	for (int i = 0; i < totalWinterOrimpic; i++) {
		printf("%d\n", yearWinterOrimpic[i]);
	}
	printf("※%d年は開催されていない為、カウントしていません。", notHeldOrimpic);


#endif
}







