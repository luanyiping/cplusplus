#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{

	}
	Person(const Person& p)
	{
		m_age = p.m_age;
		cout << "�������캯������" << endl;
	}
	int m_age;
};
// ���Ѵ����Ķ����ʼ���µĶ���
void test01()
{
	Person p1;
	Person p2(p1);
}
// ��ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p1)
{

}
void test02()
{
	Person p;
	p.m_age = 10;
	doWork(p);
}
// ��ֵ��ʽ���ؾֲ�����
Person doWork02()
{
	Person p1;
	return p1;
}
void test03()
{
	Person p = doWork02();
}
int main2()
{
	test02();
	return 0;
}

