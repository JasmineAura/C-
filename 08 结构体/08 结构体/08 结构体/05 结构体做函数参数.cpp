#include<iostream>
using namespace std;
#include<string>
//�ṹ������������
//��ѧ�����뵽�����У���ӡѧ����Ϣ
struct student 
{
	string name;
	int age;
	int score;
};
//��ӡѧ����Ϣ
//1.ֵ����
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
	struct student s = { "����",18,100 };
	printStudent1(s);
	printStudent2(&s);
	
	system("pause");
	//��������޸��������е����ݣ���ֵ���ݣ���֮�õ�ַ����
	return 0;
}