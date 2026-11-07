#include <iostream>

using namespace std;

const int N = 2e5 + 10;
const int INF = 0x3fffffff;

int n, m;
int ans = 0;
int a[N];

void dfs(int step, int val, int last)
{
	if (val <= ans)
		return;
	if (step > m)
	{
		ans = val;
		return;	
	} 
	for (int i = last + 1; i <= n - (m - step); ++i)
		dfs(step + 1, val & a[i], i);
}

void solve1()
{
	dfs(1, INF, 0);
	cout << ans;
}

void solve2()
{
	for (int i = 1; i <= n; ++i)
		ans = max(ans, a[i]);
	cout << ans;
}

void solve3()
{
	ans = INF;
	for (int i = 1; i <= n; ++i)
		ans &= a[i];
	cout << ans;
}

void solve4()
{
	for (int i = 1; i <= n; ++i)
		for (int j = i + 1; j <= n; ++j)
			ans = max(ans, a[i] & a[j]);
	cout << ans;
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
	if (n <= 20)
		solve1();
	else if (m == 1)
		solve2();
	else if (m == n)
		solve3();
	else if (m == 2)
		solve4();
	return 0;
}


