#include<iostream>
using namespace std;
#include<string>
class person
{
public:
	//设置姓名
	void setname(string name)
	{
		name = name;
	}
	//获取姓名
	string getname()
	{
		return name;
	}
	//获取年龄
	int getage()
	{
		return age;
	}
	//设置年龄
	void setage(int age)
	{
		if (age < 0 || age>150)
			return;
		else
			age = age;
	}
	//设置情人
	void setlover(string lover)
	{
		lover = lover;
	}
private:
	string name;//可读可写
	int age;//可读可写  如果想修改(年龄的范围必须是0~150之间)
	string lover;//只写

};
int main()
{
	person p;
	p.setname("张三");
	cout << p.getname() << endl;
	cout << p.getage() << endl;
	p.setlover("苍井");
	p.setage(120);
	cout << p.getage() << endl;

}
