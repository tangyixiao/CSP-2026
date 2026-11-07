#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 10;
int n,a[N],m;
bool cmp(int x,int y) {
	return x > y;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;++ i) cin >> a[i];
	if(m == 1)
	{
		int mx = 0;
		for(int i = 1;i <= n;++ i) mx = max(mx,a[i]);
		cout << mx << "\n";
		return 0;
	}
	if(m == n)
	{
		int ans = 0;
		for(int i = 1;i <= n;++ i) ans ^= a[i];
		cout << ans << "\n";
		return 0;
	}
	if(m == 2 && n <= 2000)
	{
		int ans = 0;
		for(int i = 1;i <= n;++ i)
		{
			for(int j = i + 1;j <= n;++ j) ans = max(ans,a[i] & a[j]);
		}
		cout << ans << "\n";
		return 0;
	}
	sort(a + 1,a + n + 1,cmp);
	int ans = a[m];
//	ll ans = a[1];
//	for(int i = 2;i <= m;++ i) ans &= a[i];
	cout << ans << "\n";
	return 0;
}
