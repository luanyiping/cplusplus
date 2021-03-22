#include<iostream>
using namespace std;
class News
{
public:
	void header()
	{
		cout << "公共头部" << endl;
	}
	void footer()
	{
		cout << "公共底部" << endl;
	}
	void left()
	{
		cout << "左侧列表" << endl;
	}
	void content()
	{
		cout << "新闻播报" << endl;
	}
};
class YULE
{
public:
	void header()
	{
		cout << "公共头部" << endl;
	}
	void footer()
	{
		cout << "公共底部" << endl;
	}
	void left()
	{
		cout << "左侧列表" << endl;
	}
	void content()
	{
		cout << "白百合....." << endl;
	}
};
void test01()
{
	News news;
	news.header();
	news.footer();
	news.left();
	news.content();

	// 娱乐页
	YULE yl;
	yl.header();
	yl.footer();
	yl.left();
	yl.content();
}


// 继承写法
class BasePage
{
public:
	void header()
	{
		cout << "公共头部" << endl;
	}
	void footer()
	{
		cout << "公共底部" << endl;
	}
	void left()
	{
		cout << "左侧列表" << endl;
	}
};
class News : public BasePage
{
public:
	void content()
	{
		cout << "新闻播放" << endl;
	}
};
class YULE : public BasePage
{
public:
	void content()
	{
		cout << "娱乐内容" << endl;
	}
};
// 继承减少代码的重复内容
