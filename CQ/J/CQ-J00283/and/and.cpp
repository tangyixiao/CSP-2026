#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

const int MAX_TIME = 1e9;
int n, m, ans, t; 
int a[200000 + 5];

void Dfs(int s, int x, int g)
{
	if (x == m)
	{
		ans = max(ans, g);
		return;
	}
	
	for (int i = 0; i < 2; i++)
	{
		if (!i) Dfs(s + 1, x, g);
		else
		{
			if (!x) Dfs(s + 1, x + 1, a[s]);
			else Dfs(s + 1, x + 1, g & a[s]);
		}
		t++;
	}
	if (n - s + 1 < m - x || t == MAX_TIME || g < ans) return;
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	Dfs(1, 0, 0);
	cout << ans << endl;
	return 0;
}
