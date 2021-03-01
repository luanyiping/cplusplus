#include<iostream>
using namespace std;

// namespace主要用途 : 用来解决命名冲突的问题
namespace LOL
{
	void goAtk()
	{
		cout << "LOL 攻击" << endl;
	}
}
namespace KingGlory
{
	void goAtk()
	{
		cout << "KingGlory 攻击" << endl;
	}
}
// 1.命名空间下可以放函数，变量，结构体，类
namespace A
{
	void func();
	int m_A = 10;
	struct Person
	{

	};
	class Animal
	{

	};
	namespace B
	{
		int m_A = 20;
	}
}
// 2.命名空间必须要定义在全局作用域下
// 3.命名空间可以嵌套命名空间
// 4.命名空间是开放的，可随时向命名空间中添加内容
namespace A
{
	int m_B = 30;
	// 此命名空间会和上面的命名空间进行合并
}
// 5.无名命名空间
namespace
{
	int m_C = 0;
	int m_D = 0;
	// 相当于 static int m_C = 0; static int m_D = 0; 
}
// 6.命名空间可以起别名
namespace VeryLongName
{
	int E = 0;
}
namespace VeryShortName = VeryLongName;
int main()
{
	LOL::goAtk();
	KingGlory::goAtk();
	cout << "作用域 B 下的 m_A 为" << A::B::m_A << endl;
	cout << "A::下的m_A为" << A::m_A << ",m_B为" << A::m_B << endl;
	cout << VeryLongName::E << ' ' << VeryShortName::E << endl;

}
