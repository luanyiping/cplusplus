#include<iostream>
using namespace std;
int main()
{
	int i, a[10], count = 0, j;
	long long sum = 0;
	for (i= 1; i <= 2019; i++)
	{
		int n = i;
		while (n != 0)
		{
			a[count] = n % 10;
			n = n/ 10;
			count++;
		}
		for (j = 0; j < count; j++)
		{
			if (a[j] == 2 || a[j] == 0 || a[j] == 1 || a[j] == 9)
			{
				sum += i*i;
			}
		}
		count = 0;
	}
	cout << sum << endl;
}