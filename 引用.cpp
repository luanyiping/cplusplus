#include<iostream>
using namespace std;
void test01()
{
	int a = 10;
	int& b = a;
	b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
// 对数组建立引用
void test02()
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	// 给数组起别名
	int(&Arr)[10] = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;

	typedef int(Arr2)[10];
	Arr2& Arr3 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << Arr3[i] << " ";
	}
	cout << endl;
}
// 引用的本质
void test03()
{
	int a = 10;
	int& p = a; // int* const p = &a;
	p = 20;     // *p = 20;
}
// 指针的引用
struct Person
{
	int age;
};
void allocatMemoryByRef(Person* &p)
{
	p = (Person*)malloc(sizeof(Person));
	p->age = 100;
}
void test04()
{
	Person* P1 = NULL;
	allocatMemoryByRef(P1);
	cout << P1->age << endl;
}

// 常量引用
void test05()
{
	// int& ref = 10; 使用了不合法的内存空间
	const int& ref = 10; 
	// 加入const后,编译器处理方式如下
	// int tmp = 10;
	// const int& ref = tmp;
	int* p = (int*)&ref;
	*p = 20;
	cout << ref << endl;
}

// 常量引用使用的场景 : 用来修饰形参
void showval(const int& val)
{
	// 如果只是想展示，不想更改，则用 const 修饰
	cout << "a = " << val << endl;
}
void test06()
{
	int a = 10;
	showval(a);
}
int main()
{
	// test02();
	//test04();
	//test05();
	test06();
}
