/*
----------------------------------------------------------
参考サイト
----------------------------------------------------------
http://kitako.tokyo/lib/CExercise.aspx?id=10
練習問題10-3
*/

/*
----------------------------------------------------------
問題
----------------------------------------------------------
int型のメンバー x と y を持つ構造体 POINT を定義する。
構造体 POINT を引数とし、各メンバーの値を２倍にした POINT を戻り値とする関数を定義する。
構造体 POINT 型の変数の各メンバーに値を設定し、作成した関数によって値を２倍にする。
構造体 POINT 型の変数の各メンバーの値を表示する。
*/


typedef struct point{
	int x;
	int y;
}POINT;

//プロトタイプ宣言
POINT calcDouble(POINT value);

#include <stdio.h>

void main() {
	POINT value = {5,5};
	value = calcDouble(value);

	printf("x = %d , y = %d", value.x, value.y);

}

POINT calcDouble(POINT value)
{
	value.x = value.x * 2;
	value.y = value.y * 2;

	return value;
}


