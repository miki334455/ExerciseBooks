#include <iostream>
using namespace std;

//プロトタイプ宣言
void add(int* addlessFirst, int* addlessSecond, int* addlessAdd);
void add1(int& addlessFirst, int& addlessSecond, int& addlessAdd);

//ポインタ変数＝アドレスを格納できる変数

#if 0;
void main() {	
	int pointFirst = 0;
	int pointSecond = 0;
	int addPoint = 0;

	//2教科分の点数が入っている変数のアドレスをポインタ変数に格納する。
	int* addlessFirst = &pointFirst;
	int* addlessSecond = &pointSecond;
	int* addlessAdd = &addPoint;
	
	
	cout << "2教科分の点数を入力してください。\n";

	cin >> pointFirst;
	cin >> pointSecond;

	cout << "加点する点数を入力してください。\n";
	cin >> addPoint;


	//ポインタ変数(2教科分の点数が入っている変数のアドレス)をadd関数に渡す。
	add(addlessFirst, addlessSecond, addlessAdd);

	cout << addPoint << "点加算しましたので\n";
	cout << "科目1は" << pointFirst << "点となりました。\n";
	cout << "科目2は" << pointSecond << "点となりました。\n";



}

void add(int* addlessFirst, int* addlessSecond, int* addlessAdd) {
	*addlessFirst += *addlessAdd;
	*addlessSecond += *addlessAdd;
}
#endif


void main() {
	int pointFirst = 0;
	int pointSecond = 0;
	int addPoint = 0;


	cout << "2教科分の点数を入力してください。\n";

	cin >> pointFirst;
	cin >> pointSecond;

	cout << "加点する点数を入力してください。\n";
	cin >> addPoint;


	//ポインタ変数(2教科分の点数が入っている変数のアドレス)をadd関数に渡す。
	add1(pointFirst, pointSecond, addPoint);

	cout << addPoint << "点加算しましたので\n";
	cout << "科目1は" << pointFirst << "点となりました。\n";
	cout << "科目2は" << pointSecond << "点となりました。\n";

}

void add1(int& addlessFirst, int& addlessSecond, int& addlessAdd){
	addlessFirst += addlessAdd;
	addlessSecond += addlessAdd;
}