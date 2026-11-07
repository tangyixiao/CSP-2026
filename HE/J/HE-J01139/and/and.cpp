#include <bits/stdc++.h>
#define int long long

using namespace std;
const int N = 2e5 + 20;

int n, m;
int a[N];
int ans;
int ma;
bool f;
bool p;
int sum[50];

bool cmp(int x, int y)
{
	return x > y;
}

signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);	
	cin >> n >> m;
	for (int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		ma = max(a[i], ma);
		if (a[i] > 4) f = 1;
		if (!p)
		{
			for (int j = 1; j <= 30; j ++)
			{
				if (a[i] != pow(2, j) - 1)
				{
					p = 1;
					break;
				}
			}			
		}	
	}
	sort (a + 1, a + 1 + n, cmp);
	if (!p)
	{
		ans = a[2];
	}
	else if (!f)
	{
		for (int i = 1; i <= n; i ++)
		{
			sum[a[i]] ++;
		}
		if (m != 1 && n != m && m != n - 1)
		{
			if (sum[1] == 0)
			{
				ans = 2;
			}
			else if (sum[2] == 0)
			{
				ans = 1;
			}
			else if (sum[3] == 0)
			{
				ans = 0;
			}
			else ans = 0;
		}
	}
	if (n == m)
	{
		ans = a[1];
		for (int i = 2; i <= n; i ++)
		{
			ans &= a[i];
		}
	}
	else if (m == 1) ans = ma;	
	else if (m == n - 1)
	{
		ans = a[1];
		for (int i = 2; i < n; i ++)
		{
			ans &= a[i];
		}
	}
	else
	{
		int sum = 0;
		for (int i = 1; i <= n; i ++)
		{
			sum = a[i];
			for (int j = i + 1; j < i + m; j ++)
			{
				sum &= a[j];
			}
			if (sum < ans) break;
			ans = max(sum, ans);
		}	
	}
	cout << ans;
	return 0;
}
