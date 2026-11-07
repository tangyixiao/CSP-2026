#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
int a[N], opt[N];
bool used[N];
int n, m, ans = INT_MIN;

bool check(int k)
{
	while(k % 2 == 0)
	{
		k /= 2;
	}
	if(k != 1)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void dfs(int now, int last, int maxa)
{
	if(now == n)
	{
		if(maxa < ans)
		{
			return ;
		}
		int t = opt[0];
		for(int i = 0;i < m;i++)
		{
			t &= opt[i];
		}
		if(t > ans)
		{
			ans = t;
		}
		return ;
	}
	if(last == 0)
	{
		dfs(n, 0, maxa);
		return ;
	}
	for(int i = 0;i < n;i++)
	{
		if(used[i])continue;
		used[i] = true;
		opt[now] = a[i];
		dfs(now + 1, last - 1, max(maxa, a[i]));
		used[i] = false;
	}
}

int main(void)
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	bool f1 = true;
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
		if(!check(a[i] + 1))
		{
			f1 = false;
		}
	}
	if(f1)
	{
		sort(a, a + n);
		cout << a[n - 1];
	}
	else
	{
		dfs(0, m, INT_MIN);
		cout << ans;
	}
} 