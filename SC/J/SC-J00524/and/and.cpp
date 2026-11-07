#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[100005],ans;
void dfs(int step,int now,int sum)
{
	if (((now < ans) || (sum + step - 1 > n)) || (sum < 0))
	{
		return ;
	}
	if (step == n + 1)
	{
		ans = max(ans,now);
	}
	dfs(step + 1,now,sum);
	dfs(step + 1,now & a[step],sum - 1);
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	if (m == 1)
	{
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			ans = max(ans,a[i]);
		}
		cout << ans;
	}
	else if (m == n)
	{
		cin >> ans;
		for (int i = 2; i <= n; i++)
		{
			ans &= a[i];
		}
		cout << ans;
	}
	else if (m == 2)
	{
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			for (int j = 1; j < i; j++)
			{
				ans = max(ans,a[i] & a[j]);
			}
		}
		cout << ans;
	}
	else if (n < 21)
	{
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		dfs(1,2147483647,m);
		cout << ans;
	}
	else if (m == n - 1)
	{
		int sum1[100005],sum2[100005];
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		sum1[1] = a[1];
		sum1[0] = sum2[n + 1] = 2147483647;
		for (int i = 2; i <= n; i++)
		{
			sum1[i] = sum1[i - 1] & a[i];
		}
		sum2[n] = a[n];
		for (int i = n - 1; i > 0; i--)
		{
			sum2[i] = sum2[i + 1] & a[i];
		}
		for (int i = 1; i <= n; i++)
		{
			ans = max(ans,sum1[i - 1] & sum2[i + 1]);
		}
		cout << ans;
	}
	else if (n == pow(2,(int)log2(n)))
	{
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		for (int i = n; i > n - m; i--)
		{
			ans &= a[i];
		}
		cout << ans;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		sort(a + 1,a + n + 1);
		cout << a[m];
	}
	return 0;
}