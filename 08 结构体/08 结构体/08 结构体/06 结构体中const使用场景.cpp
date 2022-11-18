#include<iostream>
using namespace std;
#include<string>

//结构体中const使用场景
struct student 
{
	string name;
	int age;
	int score;
};

//函数中的参数改为指针，可以节省内存空间
void printStudent(const student *s) 
{
	cout << s->name << "  " << s->age << "  " << s->score << endl;
}


int main6() 
{
	struct student s = { "张三",15,100 };
	//通过函数打印结构体变量的信息
	printStudent(&s);

	system("pause");

	return 0;
}