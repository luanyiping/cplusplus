#include<iostream>
using namespace std;
#include<algorithm>
#include<string>
void test01()
{
	string s1 = "ÎÒ";
	s1 += "°®ÍæÓÎÏ·";
	s1 += ':';

	string s2 = "LOL DNF";
	s1 += s2;

	string s3 = "I";
	s3.append("love");
	s3.append("game abcde", 4);
	s3.append(s2);
	s3.append(s2, 0, 3);
}
int main()
{
	test01();
}