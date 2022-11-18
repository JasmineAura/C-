#include<iostream>
using namespace std;
#include<string>
//结构体做函数参数
//将学生传入到参数中，打印学生信息
struct student 
{
	string name;
	int age;
	int score;
};
//打印学生信息
//1.值传递
void printStudent1(struct student s) 
{
	cout << "  "<<s.name <<"  "<< s.age <<"  "<< s.score << endl;
}
void printStudent2(struct student * p) 
{
	cout << p->name << "  " << p->age << "  " << p->score << endl;
}

int main5() 
{
	struct student s = { "张三",18,100 };
	printStudent1(s);
	printStudent2(&s);
	
	system("pause");
	//如果不想修改主函数中的数据，用值传递，反之用地址传递
	return 0;
}