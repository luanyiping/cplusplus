#include<iostream>
using namespace std;
#include<string>
class person
{
public:
	person()
	{
		cout << "person构造函数的调用" << endl;
	}
	~person()
	{
		cout << "person析构函数的实现" << endl;
	}
};
void test01()
{
	person p;
}
int main()
{
	test01();
	
}