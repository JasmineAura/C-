#include<iostream>
using namespace std;
#include<string>

//结构体嵌套结构体
//定义学生结构体
struct student 
{
	string name;
	int age;
	int score;
};
//定义老师结构体
struct teacher 
{
	int id;
	string name;
	int age;
	struct student stu;
};



int main4() 
{
	//创建老师
	teacher t;
	t.name = "老王";
	t.age = 50;
	t.id = 10086;
	t.stu.name = "小王";
	t.stu.age = 10;
	t.stu.score = 100;
	cout << "老师信息  " << t.name << "  " << t.id << "  " << t.age << endl;
	cout << "老师辅导的学生信息  " << t.stu.name << "  " << t.stu.age << "  " << t.stu.score << endl;

	system("pause");

	return 0;

}