#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
void test01()
{
	/*string s1;
	const char * str= "hello world";
	string s2(str);
	string s3(s2);
	string s4(10, 'a');*/

	string s1;
	s1 = "hello world";

	string s2;
	s2 = s1;

	string s3;
	s3 = 'a';

	string s4;
	s4.assign("hello c++");

	string s5;
	s5.assign("hello c++", 5);

	string s6;
	s6.assign(s5);

	string s7;
	s7.assign(10, 's');
}
int main()
{
	test01();
}