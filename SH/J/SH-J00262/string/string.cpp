#include <bits/stdc++.h>
using namespace std;

int n, a[200005];
long long ans = 0;
char c[200005];

void dfs(int a1, int b1, char c1, int a2, int b2, char c2)
{
	if (b1 >= b2) return;
	if (c1 == c2) 
	{
		if (a1 == a2) dfs(a[b1+1], b1+1, c[b1+1], a[b2-1], b2-1, c[b2-1]);
		else {
			if (a1 > a2) dfs((a1 - a2), b1, c1, a[b2-1], b2-1, c[b2-1]);
			if (a1 < a2) dfs(a[b1+1], b1+1, c[b1+1], (a2 - a1), b2, c2);
		}
		return;
	}
	if (a1 == a2) {
		ans += a1;
		dfs(a[b1+1], b1+1, c[b1+1], a[b2-1], b2-1, c[b2-1]);
	}
	if (a1 > a2) {
		ans += a2;
		dfs((a1 - a2), b1, c1, a[b2-1], b2-1, c[b2-1]);
	}
	if (a1 < a2) {
		ans += a1;
		dfs(a[b1+1], b1+1, c[b1+1], (a2 - a1), b2, c2);
	}
	return;
}

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i]; 
	}
	dfs(a[1], 1, c[1], a[n], n, c[n]);
	cout << ans;
	return 0;
 } 
