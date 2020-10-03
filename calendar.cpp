#include <stdio.h>

//===================
//	定義
//===================
enum DayOfTheWeek{
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
};

enum Month {
	JANUARY,
	FABRLY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGAST,
	SEPTEMBER,
	OCTOBER,
	NOVENBER,
	DECEMBER,
	NUM_OF_MONTH
};

//===================
//	プロトタイプ宣言
//===================
void DisplayCalender(int theNumOfDate, int theMonth);
DayOfTheWeek GetStartDayOfTheWeek(int theMonth);

//===================
//メイン
//===================
int main()
{
#if 1
	for (int i = 0; i < NUM_OF_MONTH; i++) {
		switch (i){
		case FABRLY:
			DisplayCalender(29, i);
			break;
		case APRIL:
		case JUNE:
		case SEPTEMBER:
		case NOVENBER:
			DisplayCalender(30, i);
			break;
		default:
			DisplayCalender(31, i);
			break;
		}
	}
#else
	//Debug
	DisplayCalender(28, FABRLY);
#endif

	return 0;
}

void DisplayCalender(int theNumOfDate,int theMonth) // 28,1
{
	printf("%d月\n", theMonth + 1);
	printf("日 月 火 水 木 金 土\n");

	int aStartDayOfTheWeek = (int)GetStartDayOfTheWeek(theMonth);
	int aNumOfDate = (theNumOfDate + aStartDayOfTheWeek);//空白分の日数を足した
	for (int i = 0; i < aNumOfDate; i++) {
		if (aStartDayOfTheWeek > i) {
			printf("   ");//月の始めの前までは空白
		}
		else {
			printf("%2d ", i + 1 - aStartDayOfTheWeek);
			if ((i + 1) % 7 == 0)
				printf("\n");
		}
	}
	printf("\n\n");
}

DayOfTheWeek GetStartDayOfTheWeek(int theMonth)
{
	switch (theMonth)
	{
	default:
	case JANUARY:		return WEDNESDAY;
	case FABRLY:		return SATURDAY;
	case MARCH:			return SUNDAY;
	case APRIL:			return WEDNESDAY;
	case MAY:			return FRIDAY;
	case JUNE:			return MONDAY;
	case JULY:			return WEDNESDAY;
	case AUGAST:		return SATURDAY;
	case SEPTEMBER:		return TUESDAY;
	case OCTOBER:		return THURSDAY;
	case NOVENBER:		return SUNDAY;
	case DECEMBER:		return TUESDAY;	
	}
}
