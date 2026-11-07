#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 200010;

ll t[N * 30];
ll a[N];

int n, m;

bool checkA(ll x)
{
	for (int i = 0; i <= 30; ++i)
	{
		if (x == (1 << i))
			return true;
	}
	return false;
}

int ans = 0;

void dfs(int step, int cnt, int sum)
{
	if (cnt == m)
	{
		ans = max(ans, sum);
		return;
	}
	if (step > n)
	{
		return;
	}
	dfs(step + 1, cnt + 1, sum & a[step]);
	dfs(step + 1, cnt, sum);
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin.tie(0)->sync_with_stdio(false);
	
	cin >> n >> m;
	
	bool A = true, B = checkA(n);
	
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		if (A)
		{
			A = checkA(a[i] + 1);
		}
		if (B)
		{
			B = (a[i] == i - 1);
		}
	}
	
	if (A)
	{
		sort(a + 1, a + 1 + n, greater<int>());
		cout << a[m] << endl;
		return 0;
	}
	if (B)
	{
		cout << n - m << endl;
		return 0;
	}
	
	dfs(1, 0, numeric_limits<ll>::max());
	cout << ans << endl;
	
	return 0;
}
 
