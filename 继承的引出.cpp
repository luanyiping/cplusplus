#include<iostream>
using namespace std;
class News
{
public:
	void header()
	{
		cout << "����ͷ��" << endl;
	}
	void footer()
	{
		cout << "�����ײ�" << endl;
	}
	void left()
	{
		cout << "����б�" << endl;
	}
	void content()
	{
		cout << "���Ų���" << endl;
	}
};
class YULE
{
public:
	void header()
	{
		cout << "����ͷ��" << endl;
	}
	void footer()
	{
		cout << "�����ײ�" << endl;
	}
	void left()
	{
		cout << "����б�" << endl;
	}
	void content()
	{
		cout << "�װٺ�....." << endl;
	}
};
void test01()
{
	News news;
	news.header();
	news.footer();
	news.left();
	news.content();

	// ����ҳ
	YULE yl;
	yl.header();
	yl.footer();
	yl.left();
	yl.content();
}


// �̳�д��
class BasePage
{
public:
	void header()
	{
		cout << "����ͷ��" << endl;
	}
	void footer()
	{
		cout << "�����ײ�" << endl;
	}
	void left()
	{
		cout << "����б�" << endl;
	}
};
class News : public BasePage
{
public:
	void content()
	{
		cout << "���Ų���" << endl;
	}
};
class YULE : public BasePage
{
public:
	void content()
	{
		cout << "��������" << endl;
	}
};
// �̳м��ٴ�����ظ�����
