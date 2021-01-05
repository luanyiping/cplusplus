#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
class person
{
public:
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
void myprint(person val)
{
	cout << val.m_name << '\t' << val.m_age << endl;
}
void test01()
{
	vector<person>v;
	person p1("aaa",10);
	person p2("bbb", 20);
	person p3("ccc", 30);
	person p4("ddd", 40);
	person p5("eee", 50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//for_each(v.begin(), v.end(), myprint);
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << it->m_name<< it->m_age << endl;
	}

}
int main()
{
	test01();
}