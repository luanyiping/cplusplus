#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string str = "abcdef";
	string substr = str.substr(1, 3);
	cout << substr << endl;
}
void test02()
{
	string email = "zhangsan@qq.com";
	int pos = email.find("@");
	string username = email.substr(0, pos);
	cout << username<< endl;
}
int main()
{
	test01();
}