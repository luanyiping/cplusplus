#include<iostream>
using namespace std;
// ���� : 
// ���������� : �޲ι��캯��(Ĭ�Ϲ��캯��) �вι��캯��
// �����ͷ��� : ��ͨ���� ��������
class Person
{
public:
	Person() //  �޲�(Ĭ��)
	{
		cout << "�޲ι��캯������" << endl;
	}
	Person(int a) // �в�
	{
		cout << "�вι��캯������" << endl;
	}
	Person(const Person& p)
	{
		m_age = p.m_age;
		cout << "�������캯������" << endl;
	}
	int m_age;
};
void test01()
{
	Person p1(1);
	p1.m_age = 10;
	Person p2(p1);
	cout << "p2������Ϊ " << p2.m_age << endl;
	Person p3;
}
int main()
{
	test01();
}