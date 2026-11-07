#include <bits/stdc++.h>
using namespace std;

struct node
{
	int num;
};

const int N = 2e5 + 5;
int n, m, ans, two[35], maxn;
bool fA = 1;
node a[N];

void init()
{
	two[0] = 1;
	for (int i = 1; i <= 30; i++)
	{
		two[i] = 2 * two[i - 1];
	}
}

bool cmpgreatnum(node x, node y)
{
	return x.num > y.num;
}

void dfs(int x, int v, int la)
{
	if (x == m + 1)
	{
		ans = max(ans, v);
		return;
	}
	if (m - x + 1 + la > n) return;
	if (v <= ans) return;
	if (x == 1)
	{
		for (int i = 1; i <= n; i++)
		{
			dfs(2, a[i].num, i);
		}
	}
	else
	{
		for (int i = la + 1; i <= n; i++)
		{
			dfs(x + 1, a[i].num & v, i);
		}
	}
}

void solve_dfs()
{
	dfs(1, INT_MAX, 0);
	cout << ans << "\n";
}

void solve_m2()
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j != i) ans = max(ans, a[i].num & a[j].num);
		} 
	}
	cout << ans << "\n";
	return;
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	init();
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].num;
		maxn = max(maxn, a[i].num);
		if (fA)
		{
			bool flag = 0;
			for (int j = 0; j <= 30; j++)
			{
				if (a[i].num == two[j] - 1)
				{
					flag = 1;
					break;
				}
			}
			fA = flag;
		}
	}
	if (m == 1)
	{
		cout << maxn << "\n";
		return 0;
	}
	if (n <= 20 and m <= 20)
	{
		solve_dfs();
		return 0;
	}
	if (m == n)
	{
		ans = a[1].num;
		for (int i = 2; i <= n; i++)
		{
			ans = ans & a[i].num;
		}
		cout << ans << "\n";
		return 0;
	}
	if (n <= 2000 and m == 2)
	{
		solve_m2();
		return 0;
	}
	if (fA)
	{
		sort(a + 1, a + n + 1, cmpgreatnum);
		cout << a[m].num << "\n";
		return 0;
	}
	sort(a + 1, a + n + 1, cmpgreatnum);
	ans = a[1].num;
	for (int i = 2; i <= m; i++)
	{
		ans = a[i].num & ans;
	}
	cout << ans << "\n";
	return 0;
}

