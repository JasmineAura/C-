#include<iostream>
using namespace std;
#include<string>

//�ṹ��Ƕ�׽ṹ��
//����ѧ���ṹ��
struct student 
{
	string name;
	int age;
	int score;
};
//������ʦ�ṹ��
struct teacher 
{
	int id;
	string name;
	int age;
	struct student stu;
};



int main4() 
{
	//������ʦ
	teacher t;
	t.name = "����";
	t.age = 50;
	t.id = 10086;
	t.stu.name = "С��";
	t.stu.age = 10;
	t.stu.score = 100;
	cout << "��ʦ��Ϣ  " << t.name << "  " << t.id << "  " << t.age << endl;
	cout << "��ʦ������ѧ����Ϣ  " << t.stu.name << "  " << t.stu.age << "  " << t.stu.score << endl;

	system("pause");

	return 0;

}