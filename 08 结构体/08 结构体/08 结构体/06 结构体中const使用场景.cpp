#include<iostream>
using namespace std;
#include<string>

//�ṹ����constʹ�ó���
struct student 
{
	string name;
	int age;
	int score;
};

//�����еĲ�����Ϊָ�룬���Խ�ʡ�ڴ�ռ�
void printStudent(const student *s) 
{
	cout << s->name << "  " << s->age << "  " << s->score << endl;
}


int main6() 
{
	struct student s = { "����",15,100 };
	//ͨ��������ӡ�ṹ���������Ϣ
	printStudent(&s);

	system("pause");

	return 0;
}