#include<iostream>
using namespace std;
#include<string>
class cube
{
public:
	void setl(int l)
	{
		m_l = l;
	}
	void setv(int w)
	{
		m_w = w;
	}
	void seth(int h)
	{
		m_h = h;
	}
	int getl()
	{
		return m_l;
	}
	int getw()
	{
		return m_w;
	}
	int geth()
	{
		return m_h;
	}
	int calculates()
	{
		return 2 * m_l * m_w + 2 * m_w * m_h + 2 * m_l * m_h;
	}
	int calculatev()
	{
		return m_l * m_w * m_h;
	}
	//利用成员函数判断两个立方体是否相等
	bool issamebyclass(cube c)
	{
		if (m_l== c.getl() && m_h== c.geth() && m_w == c.getw())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
private:
	int m_l;
	int m_w;
	int m_h;
};
//利用全局函数判断两个立方体是否相等
bool issame(cube c1 , cube c2)
{
	if (c1.getl() == c2.getl() && c1.geth() == c2.geth() && c1.getw() == c2.getw())
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	cube c1, c2;
	c1.setl(10);
	c1.setv(10);
	c1.seth(10);
	c2.setl(10);
	c2.setv(10);
	c2.seth(11);
	cout << "c1的面积为: " << c1.calculates() << endl;
	cout << "c1的体积为: " << c1.calculatev() << endl;
	bool ret = issame(c1, c2);
	if (ret)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	ret = c1.issamebyclass(c2);
	if (ret)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
}