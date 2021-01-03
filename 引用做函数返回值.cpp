#include<iostream>
using namespace std;
int &test01()
{
    int a = 10;
	return a;
}
int &test02()
{
	static int a = 10;
	return a;
}
int main()
{
	/*int& ref = test01();
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;*/
	int& ref = test02();
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;
	test02() = 1000;
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;
}