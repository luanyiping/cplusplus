#include<iostream>
using namespace std;
// c++ 不能这么写(发生重定义)，全局变量检测增强
int a;
int a = 10;
// 2.函数检测增强,参数类型增强，返回值类型增强，参数个数增强
int getS(int w, int h)
{
	return w * h;
}
void test02()
{
	getS(10, 10);
}
// 3.类型转换检测增强
void test03()
{
	int* p = (int*)malloc(sizeof(int));
}
// 4.struct增强
struct Person
{
	int age;
	void PlusAge() // c++中可以添加函数
	{
		age++;
	}
};
void test04()
{
	Person p1; // 可不加关键字
	p1.age;
	p1.PlusAge();
	cout << p1.age << endl;
}
// 5.bool类型
bool flag = true; // 只有真或假
void test05()
{
	cout << sizeof(flag) << endl;
}

// 6.三目运算符增强
void test06()
{
	int a = 10;
	int b = 20;
	cout << "ret = " << (a > b ? a : b) << endl;

	(a < b ? a : b) = 100; // c++中返回的是变量  a = 100
	cout << "a = " << a << endl;
}

// 7. const增强

// c 语言中，const修饰后的变量是伪常量，可以被修改，因为编译器会为变量分配内存
// c++中，是真正的常量，编译器不会为变量分配内存,放到符号表里
const int m_A = 10;  // const修饰全局变量，受到保护，无论c还是c++都不能修改
void test07()
{
	const int m_B = 10;
	int* p = (int*)&m_B;
	*p = 200;
	cout << "*p = " << *p << endl;
	cout << "m_B = " << m_B << endl;
	// c++中编译器会临时开辟一块内存空间
	// int tmp = m_B;
	// int* p = &tmp;
	// *p修改的是这块临时空间的值，m_B不会被修改

	int arr[m_B];
}
int main()
{
	// test05();
	//test06();
	test07();
}