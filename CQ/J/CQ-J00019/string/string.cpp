#include <bits/stdc++.h>
using namespace std;
int n;
long long a[200005];
char tmp[200005];
long long ans;
int f()
{
	for (int i = 1;i < n;i++)
	{
		if (a[i] != a[i + 1])
		{
			return 0;
		}
	}
	return 1;
}
int f2()
{
	for (int i = 1;i < n;i++)
	{
		if (tmp[i] != tmp[i + 1])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i] >> tmp[i];
		s = s + tmp[i];
	}
	if (f())
	{
		int l = s.size();
		for (int i = 0;i < l / 2;i++)
		{
			if (s[i] != s[l - 1 - i])
			{
				ans += a[1];
			}
		}
		cout << ans;
	}
	else if (f2())
	{
		cout << 0;
	}
	else
	{
		string x;
		for (int i = 1;i <= n;i++)
		{
			for (int j = 1;j <= a[i];j++)
			{
				x = x + tmp[i];
			}
		}
		int l = x.size();
		for (int i = 0;i < l / 2;i++)
		{
			if (x[i] != x[l - i - 1])
			{
				ans++;
			}
		}
		cout << ans;
	}
	return 0;
}

