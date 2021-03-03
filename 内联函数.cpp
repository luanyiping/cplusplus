#include<iostream>
using namespace std;
inline void mycompare(int a, int b)
{
	int ret = a < b ? a : b;
	cout << "ret = " << ret << endl;
}
void test01()
{
	int a = 10, b = 20;
	mycompare(++a, b);
}
// 内联函数注意事项
//1.类内部的成员函数,默认会加 inline 关键字
//2.内联函数声明后,如果实现时,没有加 inline 关键字,那么这个函数依然不算内联函数

int main()
{
	test01();
}
