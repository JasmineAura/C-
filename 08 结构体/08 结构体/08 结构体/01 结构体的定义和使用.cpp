#include<iostream>
using namespace std;
#include<string>

struct student
{
	//成员列表
	string name;
	int age;
	int score;
}s3;//顺便创建结构体变量

int main1() 
{
	//创建学生类型:姓名，年龄，分数
	//语法 struct 结构体名 { 结构体成员列表 }；
	//通过结构体创建变量的方式有三种：

	//创建时，struct关键字可以省略
	//* struct 结构体名 变量名
	struct student s1;
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名:" << s1.name << "年龄:" << s1.age << "分数:" << s1.score << endl;


	// struct 结构体名 变量名 = { 成员1值 ， 成员2值...}
	struct student s2 = { "李四",19,80 };
	cout << "姓名:" << s2.name << "年龄:" << s2.age << "分数:" << s2.score << endl;
	//定义结构体时顺便创建变量*/
	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	cout << "姓名:" << s3.name << "年龄:" << s3.age << "分数:" << s3.score << endl;

	/*> 总结1：定义结构体时的关键字是struct，不可省略

	> 总结2：创建结构体变量时，关键字struct可以省略

	> 总结3：结构体变量利用操作符 ''.''  访问成员

	*/

	system("pause");

	return 0;
}