#include<iostream>
using namespace std;
#include<string>

struct student
{
	//��Ա�б�
	string name;
	int age;
	int score;
}s3;//˳�㴴���ṹ�����

int main1() 
{
	//����ѧ������:���������䣬����
	//�﷨ struct �ṹ���� { �ṹ���Ա�б� }��
	//ͨ���ṹ�崴�������ķ�ʽ�����֣�

	//����ʱ��struct�ؼ��ֿ���ʡ��
	//* struct �ṹ���� ������
	struct student s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	cout << "����:" << s1.name << "����:" << s1.age << "����:" << s1.score << endl;


	// struct �ṹ���� ������ = { ��Ա1ֵ �� ��Ա2ֵ...}
	struct student s2 = { "����",19,80 };
	cout << "����:" << s2.name << "����:" << s2.age << "����:" << s2.score << endl;
	//����ṹ��ʱ˳�㴴������*/
	s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	cout << "����:" << s3.name << "����:" << s3.age << "����:" << s3.score << endl;

	/*> �ܽ�1������ṹ��ʱ�Ĺؼ�����struct������ʡ��

	> �ܽ�2�������ṹ�����ʱ���ؼ���struct����ʡ��

	> �ܽ�3���ṹ��������ò����� ''.''  ���ʳ�Ա

	*/

	system("pause");

	return 0;
}