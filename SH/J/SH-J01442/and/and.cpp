#include <bits/stdc++.h>
using namespace std;

int m, n;
int a[200010];
int maxn = 0;

void dfs(int step, int num, int now)
{
	if (step >= m)
	{
		maxn = max(maxn, num);
		return;
	}
	if (now > n)
	{
		return;
	}
	if (n-now+1 < m-step) {return;}
	
	
	dfs(step, 	num, 		now+1);
	dfs(step+1, num&a[now], now+1);
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
//	memset(a, sizeof(a), 2147483647);
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	
	dfs(0, 2147483647, 1);
	
	cout << maxn << endl;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
