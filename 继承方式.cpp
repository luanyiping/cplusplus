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

// ���м̳�
class Son1 : public Base1
{
public:
	void func()
	{
		cout << m_C << endl; // �����private�����������޷�����
		cout << m_A << endl; // �����public���Ի���public
		cout << m_B << endl; // �����protected���Ի���protected
	}

};
void myFunc1()
{
	Son1 s1;
	s1.m_A; // ���ں�����Ҳ�ɷ���
	s1.m_B  //���ⲻ�ɷ���
	s1.m_C  // �������ⶼ���ɷ���
}

// �����̳�
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
		cout << m_C << endl; // �����private�����������޷�����
		cout << m_A << endl; // �����public���Ա�Ϊprotected
		cout << m_B << endl; // �����protected���Ի���protected
	}
};

void myFunc2()
{
	Son2 s2;
	// �����ܷ���
	s2.m_C;
	s2.m_A;
	s2.m_B;
}

// ˽�м̳�
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
		cout << m_C << endl; // �����private�����������޷�����
		cout << m_A << endl; // �����public���Ա�Ϊprivate
		cout << m_B << endl; // �����protected���Ի���private
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