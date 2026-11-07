#include<bits/stdc++.h>
using namespace std;
#define int long long
constexpr int N = 2e5 + 66;
using ll = long long;
ll a[N], n, ans;
char c[N];
signed main()
{
	freopen("string.in", "r", stdin);freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);cin.tie(0), cout.tie(0);
	cin >> n;
	for(int i = 1;i <= n;i ++) cin >> a[i] >> c[i];
	ll l = 1, r = n, cntl = a[l], cntr = a[r];
	while(l < r)
	{
		if(c[l] == c[r])
		{
			if(cntl > cntr) cntl -= cntr, cntr = a[-- r];
			else if(cntl < cntr) cntr -= cntl, cntl = a[++ l];
			else cntl = a[++ l], cntr = a[-- r];
		}
		else
		{
			if(cntl > cntr) ans += cntr, cntl -= cntr, cntr = a[-- r];
			else if(cntl < cntr) ans += cntl, cntr -= cntl, cntl = a[++ l];
			else ans += cntl, cntl = a[++ l], cntr = a[-- r];
		}
	}
	cout << ans << '\n';
	return 0;
}
