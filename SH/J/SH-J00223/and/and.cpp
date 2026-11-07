#include<iostream>
using namespace std;
const int N = 2e5+5;
unsigned int sum;
int n, m, ans;
int a[N];
void dfs(int step, int s, int cnt)
{
	if (step > n)
	{
		if (cnt == m) ans = max(ans, s);
		return;
	}
	dfs(step+1, s, cnt);
	dfs(step+1, s&a[step], cnt+1);
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	int mul = 1;
	for (int i = 0; i <= 30; i++)
	{
		sum += mul;
		mul *= 2;
	}
	if (n <= 20)	dfs(1, sum, 0);
	if (m == 1)
		for (int i = 1; i <= n; i++) ans = max(ans, a[i]);
	if (m == n)
		for (int i = 1; i <= n; i++) ans = ans&a[i];
	if (m == 2)
	{
		for (int i = 1; i <= n; i++)
			for (int j = i+1; j <= n; j++)
				ans = max(ans, a[i]&a[j]);
	}
	cout << ans;
	return 0;
}
