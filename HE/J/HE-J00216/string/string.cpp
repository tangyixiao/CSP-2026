#include <bits/stdc++.h>
using namespace std;
constexpr int N = 2e5 + 60;
int n, a[N], lens;
char c[N], s[N];
int k = 1;

int tick()
{
	string t;
	if (lens % 2 != 0)
	{
		for (int i = 1;i <= (lens - 1) / 2 + 1; ++ i)
		{
			t[i] = s[i];
		}
		int num = 0, sum = 0;
		for (int i = 1, j = lens;i <= (lens - 1) / 2 + 1, j >= (lens - 1) / 2 + 1; ++ i, -- j)
		{
			if (t[i] == s[i]) num ++;
			else sum ++;
		}
		if (num == lens) return 0;
		else return sum;
	}
	else
	{
		for (int i = 1;i <= lens / 2; ++ i)
		{
			t[i] = s[i];
		}
		int num = 0, sum = 0;
		for (int i = 1, j = lens;i <= lens / 2, j >= lens / 2; ++ i, -- j)
		{
			if (t[i] == s[i]) num ++;
			else sum ++;
		}
		if (num == lens) return 0;
		else return sum;
	}
}

int main()
{
//	freopen("string.in", "r", stdin);
//	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	for (int i = 1;i <= n; ++ i)
	{
		cin >> a[i] >> c[i];
		lens += a[i];
	}
	for (int i = 1;i <= n, k <= lens; ++ i)
	{
		for (int j = 1;j <= a[i]; ++ j, ++ k)
		{ 
			s[k] = c[i];
		}
	}
	int num = tick();
	cout << num;
	return 0;
}
