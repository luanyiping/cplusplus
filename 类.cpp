#include<iostream>
#include<string>
using namespace std;
const double PI = 3.14;
class student
{
public:
	string name;
	int id;
	void showstudent()
	{
		cout << "姓名为 " << name << "学号为 " << id << endl;
	}
	void setname(string name)
	{
		name = name;
	}
	void setid(int id)
	{
		id = id;
	}
};
int main()
{
	student s1;
	//s1.name = "张三";
	s1.setname("张三");
	s1.setid(1);
	//s1.id = 1;
	s1.showstudent();
}


