#include<iostream>
using namespace std;
// 函数参数注意事项,如果有一个位置有了默认参数，从这个位置往后，必须都有默认参数
void func(int a, int b = 10, int c = 20)
{
	cout << "a + b + c = " << a + b + c << endl;
}
// 如果函数声明里面有了默认参数，那么函数实现时必须没有
void fun2(int a = 10, int b = 20);
void fun2(int a, int b){}
// 函数占位参数
// 如果有了占位参数，调用函数时必须提供这个参数(可以有默认值)，但是用不到参数
void fun3(int a, int = 1)
{

}
int main2()
{
	func(1,2,3);
	fun3(10);
	return 0;
}