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
		cout << "拷贝构造函数调用" << endl;
	}
	int m_age;
};
// 用已创建的对象初始化新的对象
void test01()
{
	Person p1;
	Person p2(p1);
}
// 以值传递的方式给函数参数传值
void doWork(Person p1)
{

}
void test02()
{
	Person p;
	p.m_age = 10;
	doWork(p);
}
// 以值方式返回局部对象
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

