#include <bits/stdc++.h>
#define ll long long 
using namespace std;
ll n, m, cnt, ss;
struct st
{
	int num;
	int one;
	int wei;
}a[200010];
int f(ll x)
{
	int sum = 0;
	cnt = 0;
	while(sum != 1)
	{
		cnt++;
		if (x % 2 == 1) sum++;
		x /= 2;
	}
	sum++;
	cnt++;
	return sum;
}
bool cmp(st x, st y)
{
	if (x.wei != y.wei ) return x.wei > y.wei;
	return x.one > y.one;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].num;
		a[i].one = f(a[i].num);
		a[i].wei = cnt;
	}
	sort(1 + a, 1 + a + n, cmp);
	ss = a[1].num;
	for (int i = 1; i <= m; i++)
	{
		ss &= a[i].num;
	}
	cout << ss;
	return 0;
}