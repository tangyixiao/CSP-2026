#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	int a[200005];
	char c[2000];
	string b = "";
	int e;
	int d;
	cin >> n;
	if (n == 1)
	{
		cout << 0;
		return 0;
	}
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i] >> c[i];
		for (int j = 1;j <= a[i];j++)
		{
			b += c[i];
		}
	}
	for (int i = 1; i <= n;i++)
	{
		e = b[0];
		if (e != b[i])
		{
			d = 1;
			break;
		}
	}
	if (d == 0)
	{
		cout << 0;
		return 0;
	}
	cout << 2;
	return 0;
}
