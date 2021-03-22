/*
＜URL＞
http://tamaking01.hatenablog.com/entry/2015/05/06/214435
*/

/*
＜問題5＞
②main関数内にて、太郎（身長175センチ、体重66キロ）、次郎（身長168センチ、体重72キロ）を登録し、
出力せよ。
*/

#include <iostream>
#include "practiceClass.h"

void main()
{
	Student miki;
	miki.setData("miki", 165.1, 50.5);
	miki.printData();
}

void Student::setData(string theName, float theHeight, float theWeight)
{
	mName = theName;
	mHeight = theHeight;
	mWeight = theWeight;
}

void Student::printData()
{
	printf("%s,%.1f,%.1f", mName.c_str(), mHeight, mWeight);
}


/*

Student::sData Student::gData[NUM_OF_HUMAN] = {
	{"miki", 165.1, 50.5},
	{"mikio", 165.1, 50.5},
};


void main()
{
	Student student[2];

	for (int i = 0; i < Student::NUM_OF_HUMAN; i++) {
		student[i].setData(Student::gData[i]);
		student[i].printStudent();
	}
}

void Student::setData(sData theData)
{
	mData = theData;
}

void Student::printStudent()
{
	printf("%s,%.1f,%.1f\n", mData.name.c_str(), mData.height, mData.weight);
}

*/
