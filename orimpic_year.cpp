#include <stdio.h>

#if 0
西暦を入力し、入力内容に応じて下記を表示をするプログラムを作成してください。
- 夏季オリンピックの年は「Summer」
- 冬季オリンピックの年は「Winter」
- どちらにも当てはまらない場合は「Error」

参考情報
夏季オリンピックが初めて開催された年は1896年
冬季オリンピックが初めて開催された年は1898年
#endif





enum {
	ORIMPIC_CHECK = 4,
	ORIMPIC_START_YEAR = 1896,
};

void main()
{
	int year = 0;
	
	scanf("%d", &year);

	if (year >= ORIMPIC_START_YEAR && year % ORIMPIC_CHECK == 0) {
		printf("%s", "Summer");
	}
	else if (year >= ORIMPIC_START_YEAR && year % ORIMPIC_CHECK == 2) {
		printf("%s", "Winter");
	}
	else {
		printf("%s", "Error");
	}
}
