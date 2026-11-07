#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;

int a[200010];

int main()
{
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n , m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	int ans = 0;
	for (int k = 30; k >= 0; k--)
	{
		int cnt = 0;
		for (int i = 1; i <= n; i++)
		{
			if (((a[i] & ans) == ans) && (a[i] & (1 << k))) cnt++;
		}
		if (cnt >= m) ans += (1 << k);
	}
	cout << ans << '\n';
	return 0;
}
