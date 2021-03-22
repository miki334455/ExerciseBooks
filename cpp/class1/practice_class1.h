#include <iostream>
using namespace std;


class Student
{
public:
	Student(){}
	~Student(){}
	void setData(string theName, float theHeight, float theWeight);
	void printData();
private:
	string mName;
	float mHeight;
	float mWeight;


};





/*
class Student
{
public:
	Student(){}

	struct sData {
		string name;
		float height;
		float weight;
	};

	void setData(sData theData);
	void printStudent();

	~Student() {}

	enum {
		NUM_OF_HUMAN = 2
	};
	static sData gData[NUM_OF_HUMAN];

private:
	sData mData;
};
*/
