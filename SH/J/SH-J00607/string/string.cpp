#include <iostream>
#include <algorithm>
using namespace std;

long long n;
long long a[200002], pre[200002], suf[200002], sum[200002][33];
char c[200002];

long long query(long long x)
{
	long long l = 1, r = n, ans = n;
	while (l <= r)
	{
		long long mid = (l + r) / 2;
		if (suf[mid] <= x)
		{
			r = mid - 1;
			ans = mid;
		}
		else
		{
			l = mid + 1;
		}
	}
	return ans;
}

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	string s = "";
	for (long long i = 1; i <= n; ++i)
	{
		cin >> a[i] >> c[i];
		pre[i] = pre[i - 1] + a[i];
	}
	for (long long i = n; i > 0; --i)
	{
		suf[i] = suf[i + 1] + a[i];
		for (long long j = 0; j < 26; ++j)
		{
			sum[i][j] = sum[i + 1][j];
			if (c[i] - 'a' == j)
			{
				sum[i][j] += a[i];
			}
		}
	}
	long long ans = 0;
	for (long long i = 1; i <= n; ++i)
	{
		long long pos1 = query(pre[i - 1]), pos2 = query(pre[i]);
		long long num = sum[pos2][c[i] - 'a'] - sum[pos1][c[i] - 'a'];
		if (c[pos2 - 1] == c[i])
		{
			num += pre[i] - suf[pos2];
		}
		if (c[pos1 - 1] == c[i])
		{
			num -= pre[i - 1] - suf[pos1];
		}
		ans += a[i] - num;
	}
	cout << ans / 2;
	
	return 0;
} 
