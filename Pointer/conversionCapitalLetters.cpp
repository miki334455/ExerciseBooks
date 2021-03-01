/*
----------------------------------------------------------
参考サイト
----------------------------------------------------------
http://kitako.tokyo/lib/CExercise.aspx?id=8
練習問題8-2
*/



#include <stdio.h>
#include <string.h>

void main()
{
	char str[] = "hello world"; 

	for (int i = 0; i < strlen(str); i++) {
		if (i == 0 || i == 6) {
			*(str + i) = *(str + i) - ('a' - 'A');
		}
	}
	printf("%s\n", str);

}