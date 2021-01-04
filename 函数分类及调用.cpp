#include<iostream>
using namespace std;
#include<string>
class person
{
public:
	//普通构造函数
	person()
	{
		cout << "person无参构造函数的调用" << endl;
	}
	person(int a)
	{
		age = a;
		cout << "person有参构造函数的调用" << endl;
	}
	//拷贝构造函数
	person(const person &p)
	{
		age = p.age;
		cout << "person拷贝构造函数调用" << endl;
	}
	~person()
	{
		cout << "person析构函数调用" << endl;
	}
	int age;
};
void test01()
{
	// 1.括号法
	person p; //默认构造函数调用
	person p2(10); //有参构造函数调用
	person p3(p2); //拷贝构造函数调用
	cout << p2.age << endl;
	cout << p3.age << endl;
}
int main()
{
	test01();

}