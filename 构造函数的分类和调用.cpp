#include<iostream>
using namespace std;
// 分类 : 
// 按参数分类 : 无参构造函数(默认构造函数) 有参构造函数
// 按类型分类 : 普通构造 拷贝构造
class Person
{
public:
	Person() //  无参(默认)
	{
		cout << "无参构造函数调用" << endl;
	}
	Person(int a) // 有参
	{
		cout << "有参构造函数调用" << endl;
	}
	Person(const Person& p)
	{
		m_age = p.m_age;
		cout << "拷贝构造函数调用" << endl;
	}
	int m_age;
};
void test01()
{
	Person p1(1);
	p1.m_age = 10;
	Person p2(p1);
	cout << "p2的年龄为 " << p2.m_age << endl;
	Person p3;
}
int main()
{
	test01();
}