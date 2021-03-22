#include<iostream>
using namespace std;
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

// 公有继承
class Son1 : public Base1
{
public:
	void func()
	{
		cout << m_C << endl; // 基类的private属性派生类无法访问
		cout << m_A << endl; // 基类的public属性还是public
		cout << m_B << endl; // 基类的protected属性还是protected
	}

};
void myFunc1()
{
	Son1 s1;
	s1.m_A; // 类内和类外也可访问
	s1.m_B  //类外不可访问
	s1.m_C  // 类内类外都不可访问
}

// 保护继承
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 : protected Base2
{
public:
	void func()
	{
		cout << m_C << endl; // 基类的private属性派生类无法访问
		cout << m_A << endl; // 基类的public属性变为protected
		cout << m_B << endl; // 基类的protected属性还是protected
	}
};

void myFunc2()
{
	Son2 s2;
	// 都不能访问
	s2.m_C;
	s2.m_A;
	s2.m_B;
}

// 私有继承
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 : private Base3
{
public:
	void func()
	{
		cout << m_C << endl; // 基类的private属性派生类无法访问
		cout << m_A << endl; // 基类的public属性变为private
		cout << m_B << endl; // 基类的protected属性还是private
	}
};

class GrandSon3 : public Son3
{
public:
	void func()
	{
		cout << m_A << endl;
		cout << m_B << endl;
		cout << m_C << endl;
	}
};