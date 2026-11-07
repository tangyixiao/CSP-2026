#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 25;
int n, m, a[N], ans;

signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 29, cnt; i >= 0; i--)
	{
		cnt = 0;
		for(int j = 1; j <= n; j++)
		{
			if((a[j] & ans) != ans) continue;
			if(a[j] & (1 << i)) cnt++;
		}
		if(cnt >= m) ans += (1 << i);
	}
	cout << ans << endl;
	return 0;
 } 
