#include <bits/stdc++.h>
using namespace std;

const long long N = 2e5 + 5, M = 25;
long long a[N], n, m, dp[M];

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	bool flag = true;
	long long maxn = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, q = a[1];
	for(long long i = 1; i <= n; i++)
	{
		cin >> a[i];
		if(i > 1)	q = q & a[i];
		if(a[i] != a[i - 1])
		{
			flag = false;
		}
		maxn = max(maxn, a[i]);
		if(a[i] == 1)	cnt1++;
		if(a[i] == 2)	cnt2++;
		if(a[i] == 3)	cnt3++;
	}
	if(m == 1)
	{
		cout << maxn << endl;
		return 0;
	}
	else if(m == 2)
	{
		long long maxa = 0;
		for(long long i = 1; i <= n; i++)
		{
			for(long long j = i + 1; j <= n; j++)
			{
				maxa = max(maxa, a[i] & a[j]);
			}
		}
		cout << maxa << endl;
		return 0;
	}
	else if(maxn < 4)
	{
		if(cnt3 >= m)	cout << 3 << endl;
		else if(cnt2 >= m || cnt3 + cnt2 >= m)	cout << 2 << endl;
		else if(cnt1 >= m || cnt3 + cnt1 >= m)	cout << 1 << endl;
		else	cout << 0 << endl;
		return 0;
	}
	else if(flag == true)
	{
		cout << a[1] << endl;
		return 0;
	}
	else if(m == n)
	{
		cout << q << endl;
		return 0;
	}
	else if(n <= 20)
	{
		int fz = -1;
		for(int i = 1; i <= 30; i++)
		{
			fz *= 2;
		}
		for(int j = 0; j <= m; j++)
		{
			dp[j] = fz;
		}
		for(long long i = 1; i <= n; i++)
		{
			for(long long j = m; j >= 1; j--)
			{
				dp[j] = max(dp[j], dp[j - 1] & a[i]);
			}
		}
		cout << dp[m] << endl;
		return 0;
	}
	cout << 0 << endl;
	return 0;
}
