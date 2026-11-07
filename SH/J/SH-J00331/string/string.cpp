#include <iostream>
#include <algorithm>
using namespace std;
#define Maxn 200005
typedef long long ll;
int n;
ll tot, e1, e2, ans, a[Maxn], s[Maxn];
char c[Maxn];
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
		tot += a[i];
		s[i] = s[i - 1] + a[i];
	}
	if (n == 1)
	{
		cout << 0;
		exit(0); 
	}
	if (n == 2)
	{
		if (c[1] == c[2]) cout << 0;
		else cout << min(a[1], a[2]);
		exit(0);
	}
	if (tot & 1) e1 = e2 = tot / 2 + 1;
	else e1 = tot / 2, e2 = e1 + 1;
	int l = 1, r = n;
	ll pl = 0, pr = tot + 1, nowl = a[1], nowr = a[n];
	while (true)
	{
		ll now = min(nowl, nowr);
		now = min(now, e1 - pl);
		pl += now, pr -= now;
		nowl -= now, nowr -= now;
		if (nowl == 0)
		{
			++l;
			nowl += a[l];
		}
		if (nowr == 0)
		{
			--r;
			nowr += a[r];
		}
		int L = lower_bound(s + 1, s + n + 1, pl) - s;
		int R = lower_bound(s + 1, s + n + 1, pr) - s;
		if (c[L] != c[R]) ans += now;
		//cout << l << ' ' << r << ' ' << pl << ' ' << pr << '\n';
		if (pl >= pr || l >= r) break;
	}
	cout << ans;
	return 0;
}
//at 9:46 我糖丸了 
//update on 11.18 暴论：B > D > A > C 当然如果C挂了就纯小丑 
//赤石题 橙~黄 
