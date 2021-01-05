#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string s = "hello";
	s.insert(1, "111");
	cout << "s=" << s << endl;
	s.erase(1, 3);
	cout << "s=" << s << endl;
}
int main()
{
	test01();
}