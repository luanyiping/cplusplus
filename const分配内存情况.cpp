#include<iostream>
#include<string>
using namespace std;
// 1.取地址会分配临时内存(不能改)
void test01()
{
	const int a = 10;
	int* p = (int*)&a;
	// int tmp = a;
	// int* p = &tmp;
}
// 2.extern 编译器也会给const变量分配内存
// 3.用普通变量去初始化const变量,会分配内存
void test03()
{
	int a = 10;
	const int b = a;
	int* p = (int*)&b;
	*p = 20;
	cout << "*p = " << *p << endl;
}
// 4.自定义数据类型会分配内存
struct Person
{
	string Name;
	int age;
};
void test04()
{
	const Person P1;
	Person* p = (Person*)&P1;
	p->Name = "lsp";
	p->age = 18;
	cout << "姓名为 : " << p->Name << endl;
	cout << "年龄为 : " << p->age << endl;
}
int main()
{
	//test03();
	test04();
}