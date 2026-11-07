#include <bits/stdc++.h>
using namespace std;
long long a[200010];
bool cmp(long long a, long long b)
{
	return a > b;
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long m, n;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) 
	{
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	int max = a[1];
	for (int i = 2; i <= m; i++)
	{
		max &= a[i];
	}
	cout << max;
	return 0;
} 
