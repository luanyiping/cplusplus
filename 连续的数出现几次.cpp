#include<iostream>
using namespace std;
int main()
{
	int currval = 0, val = 0;
	if (cin >> currval)
	{
		int cnt = 1;
		while (cin >> val)
		{
			if (currval == val)
			{
				cnt++;
			}
			else
			{
				cout << currval<< " occurs "<< cnt<< " times" << endl;
				currval = val;
				cnt = 1;

			}
		}
		cout << currval << " occurs " << cnt << " times" << endl;

	}

}