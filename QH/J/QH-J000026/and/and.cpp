#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	int n, m, a[10005];
	int ans = 0;
	for(int i=1; i<=n; i++)
	{
		cin >> a[i];
	}
	for(int i=1; i<=m;i++)
	{
		ans = max(a[i], a[m]);
	}
	cout << ans;
	return 0;
}
