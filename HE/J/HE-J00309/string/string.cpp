#include<iostream>
using namespace std;
int n,a[200005];
int main ()
{
	freopin("string.in","w",tedion);
	freopin("string.out","r",tedion);
	cin >> n;
	int q = 0;
	for (int i = 1;i <= n;i ++)
	{
		int p,o;
		cin >> p >> o;
		q += p;
		for (int j = 1;j <= p;j ++)
		{
			a[j] = o;
		}
	}
	if (q == 1)
	{
		cout << 0;
		return 0;
	}
	if (q%2 != 0)
	{
		q += 1;
	}
	cout << q / 2;
	return 0;
}
