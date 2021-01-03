#include<iostream>
using namespace std;
//1.值传递
void my_swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//2.地址传递
void my_swap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3.引用传递
void my_swap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10, b = 20;
	my_swap01(10, 20);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	my_swap02(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	my_swap03(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}