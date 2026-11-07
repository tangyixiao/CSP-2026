#include <iostream>
#include <algorithm>
using namespace std;
#define Maxn 200005
typedef long long ll;
int n, m;
ll ans, a[Maxn];
int cot(ll x)
{
	int cnt = 0;
	while (x)
	{
		if (x & 1) ++cnt;
		x >>= 1;
	}
	return cnt;
}
bool cmp(ll a, ll b) {return cot(a) > cot(b);}
bool check(ll x)
{
	ll num = a[1], cnt = 1;
	if (num < x) return false;
	for (int i = 2; i <= n; i++)
	{
		if ((num & a[i]) < x) continue;
		num &= a[i];
		++cnt;
	}
	//cout << x << ' ' <<  << ' ' << cnt << '\n';
	return (cnt >= m);
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1, cmp);
	ll l = 0, r = a[1], mid;
	while (l <= r)
	{
		ll mid = (l + r) >> 1;
		if (check(mid)) ans = mid, l = mid + 1;
		else r = mid - 1;
	}
	cout << ans;
	return 0;	
} 
//at 10:11 还能争 
//小贪题 黄 
