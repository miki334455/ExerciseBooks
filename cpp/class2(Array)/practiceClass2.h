#include <iostream>
using namespace std;

#define NUM_OF_STUDENT 5

typedef struct {
	string Name;
	float Height;
	float Weight;
}STUDENT_DATA;

class Student
{
public:
	Student() {};
	~Student() {};
	void setData(STUDENT_DATA* data);
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
