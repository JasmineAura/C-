#include<iostream>
using namespace std;
#include<string>

//�ṹ��ָ��
struct student 
{
	string name;
	int age;
	int score;
};


int main3() 
{

	struct student s = { "����",18,100 };
	struct student *p = &s;
	//���ò�����  ->  ����ͨ���ṹ��ָ����ʽṹ������
	cout << p->name << "  " << p->age << "  " << p->score << endl;

	system("pause");

	return 0;
}