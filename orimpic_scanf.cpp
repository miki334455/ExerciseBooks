#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum {
	SUMMER_ORIMPIC = 1896,
	WINTER_ORIMPIC = 1898,
	JUDGMENT_ORIMPIC = 4,
};
void main() {
	int year = 0;

		printf("任意の数字を入力してください。：");
		scanf("%d", &year);

		if (year >= SUMMER_ORIMPIC && year % JUDGMENT_ORIMPIC == 0) {
			printf("%s\n", "Summer");
		}
		else if (year >= WINTER_ORIMPIC && year % JUDGMENT_ORIMPIC == 2) {
			printf("%s\n", "Winter");
		}
		else {
			printf("%s\n", "Error");
		}
	}
