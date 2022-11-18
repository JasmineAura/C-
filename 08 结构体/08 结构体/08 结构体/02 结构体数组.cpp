#include<iostream>
using namespace std;
#include<string>

//结构体数组
struct student
{
	string name;
	int age;
	int score;
};

int main2() 
{
	struct student arr[3] =
	{
		{"张三",20,100},
		{"李四",21,80},
		{"王五",22,60}
	};

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i].name << "  " << arr[i].age << "  " << arr[i].score << endl;
	}



	system("pause");

	return 0;
}