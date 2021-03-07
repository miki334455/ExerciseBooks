/*
----------------------------------------------------------
参考サイト
----------------------------------------------------------
http://kitako.tokyo/lib/CExercise.aspx?id=10
練習問題10-6
*/

/*
----------------------------------------------------------
問題
----------------------------------------------------------
以下は、都市の名前と位置を表示するプログラムである。
名前と位置を一覧表示する関数 ShowCityInfo を完成させなさい。

引数は、CITYINFO構造体の配列と配列の要素数である。
*/

/*
----------------------------------------------------------
出力例
----------------------------------------------------------
東京、緯度:35.410000、経度:139.450000
大阪、緯度:34.410000、経度:135.290000
名古屋、緯度:35.110000、経度:136.540000
*/


#define NUM_OF_CITY_NAME 20
#define NUM_OF_CITY 3

//構造体：緯度、経度をまとめる
typedef struct position {
	float latitude;  //緯度
	float longitude; //経度
}POSITION_CITY;


//構造体：都市名、緯度、経度をまとめる。
typedef struct Data {
	char city[NUM_OF_CITY_NAME];
	POSITION_CITY positionCity;
}CITY_DATA;


//プロトタイプ宣言
void ShowCityInfo(CITY_DATA* cityData,int numOfCity);


#include <stdio.h>
	
void main()
{
	CITY_DATA cityData[NUM_OF_CITY] = {
		{"東京",35.41,139.45},
		{"大阪",34.41,135.29},
		{"名古屋",35.11,136.54},
	};

	ShowCityInfo(cityData, NUM_OF_CITY);
}


void ShowCityInfo(CITY_DATA* cityData,int numOfCity)  //都市名、緯度、経度を表示する関数。　引数：cityData[NUM_OF_CITY]
{
	for (int i = 0; i < numOfCity; i++) {
		printf("%s、緯度:%f、経度:%f\n", (cityData + i)->city, (cityData + i)->positionCity.latitude,
			  (cityData + i)->positionCity.longitude);
	}
}