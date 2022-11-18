#include<iostream>
using namespace std;
#include<string>

//结构体指针
struct student 
{
	string name;
	int age;
	int score;
};


int main3() 
{

	struct student s = { "张三",18,100 };
	struct student *p = &s;
	//利用操作符  ->  可以通过结构体指针访问结构体属性
	cout << p->name << "  " << p->age << "  " << p->score << endl;

	system("pause");

	return 0;
}