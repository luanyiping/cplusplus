#include<iostream>
using namespace std;
// 函数重载,必须在同一个作用域,函数的参数个数不同 或者 类型不同 或者 顺序不同
// 返回值不能作为函数重载的条件
void func()
{
	cout << "无参数的func()" << endl;
}
void func(int a)
{
	cout << "有参数的func(int a)" << endl;
}
void func(double a)
{
	cout << "有参数的func(double a)" << endl;
}
void func(double a, int b)
{
	cout << "有参数的func(double a,int b)" << endl;
}
void func(int a, double b)
{
	cout << "有参数的func(int a,double b)" << endl;
}
// 当函数重载碰上默认参数时，注意二义性的问题
void func(int a, int b = 10)
{

}
void func(int a)
{

}

// 引用重载
void func(int& a)
{

}
void func(const int& a)
{

}
void test01()
{
	func();
	func(1);
	func(1.1);
	func(1.1, 1);
	func(1, 1.1);
}

int main()
{
	test01();
}
