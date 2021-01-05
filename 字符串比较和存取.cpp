#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string s1 = "hello";
	string s2 = "hello";
	if (s1.compare(s2) == 0)
		cout << "s1==s2" << endl;
	else if (s1.compare(s2) > 0)
		cout << "s1大于s2" << endl;
	else
		cout << "s1小于s2" << endl;

}
void test02()
{
	string s = "hello";
	//访问单个字符
	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < s.size(); i++)
	{
		cout << s.at(i) << " ";
	}
	cout << endl;
	//修改单个字符
	s[0] = 's';
	s.at(0)= 'd';
}
int main()
{

}