#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int a[200010];
bool last[200010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll n,m;
	cin >> n >> m;
	if(m == n || m == 1)
	{
		int ans = INT_MAX,mx = 0;
		for(int i = 0;i < n;i++)
		{
			int x;
			cin >> x;
			ans &= x;
			mx = max(mx,x);
		}
		if(m == n) cout << ans;
		else if(m == 1) cout << mx;
		return 0;
	}
	for(ll i = 0;i < n;i++) cin >> a[i];
	sort(a,a + n);
	for(int i = 0;i < n;i++) last[i] = 1;
	int ans = 0;
	for(ll i = 30;i >= 0;i--)
	{
		int cnt = 0;
		for(int j = 0;j < n;j++) cnt += ((a[j] >> i) & 1) && last[j];
		if(cnt < m) continue;
		ans += 1 << i;
		for(int j = 0;j < n;j++) last[j] = ((a[j] >> i) & 1) && last[j];
	}
	cout << ans;
	return 0;
}
