#include<iostream>
using namespace std;
#include<string>

//�ṹ������
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
		{"����",20,100},
		{"����",21,80},
		{"����",22,60}
	};

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i].name << "  " << arr[i].age << "  " << arr[i].score << endl;
	}



	system("pause");

	return 0;
}