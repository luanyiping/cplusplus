#include<iostream>
using namespace std;
namespace KingGlory
{
	int sunwukong = 10;
}
void test1()
{
	int sunwukong = 20;
	cout << KingGlory::sunwukong << endl; // 10
	cout << sunwukong << endl;  //  20
	using  KingGlory::sunwukong;
	cout << sunwukong << endl;    // 报错
	// 写了using声明后，说明以下的sunwukong是 KingGlory下的，但编译器又有就近原则，因此产生二义性
}

// using编译指令
void test2()
{
	int sumwukong = 20;
	using namespace KingGlory;
	cout << sunwukong << endl; // 10
}

int main()
{
	test1();
	test2();
}