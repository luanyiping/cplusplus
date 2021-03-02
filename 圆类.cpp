#include<iostream>
using namespace std;
const int pi = 3.14;
class Circle
{
public : 
	double CalculateZC()
	{
		return 2 * pi * m_R;
	}
	void SetR(int r)
	{
		m_R = r;
	}
	int m_R;
};
void test01()
{
	Circle c1;
	c1.SetR(10);
	cout << c1.CalculateZC() << endl;
}
int main()
{
	test01();
}