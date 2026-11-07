#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 10;
int n;
struct Node
{
	ll len;
	char c;
};
Node a[N];
ll ans;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	int cnt = 0;
	char lst = ' ';
	for(int i = 1; i <= n; i ++)
	{
		ll x;
		char y;
		cin >> x >> y;
		if(y != lst)
		{
			cnt ++;
			a[cnt].len = x;
			a[cnt].c = lst = y;
		}
		else
		{
			a[cnt].len += x;
		}
	}
	int l = 1, r = cnt;
	while(l < r)
	{
		if(a[l].c != a[r].c)
		{
			if(a[l].len == a[r].len)
			{
				ans += a[r].len;
				l ++;
				r --;
				continue;
			}
			if(a[l].len < a[r].len)
			{
				ans += a[l].len;
				a[r].len -= a[l].len;
				l ++;
				continue;
			}
			if(a[l].len > a[r].len)
			{
				ans += a[r].len;
				a[l].len -= a[r].len;
				r --;
				continue;
			}
		}
		if(a[l].c == a[r].c)
		{
			if(a[l].len == a[r].len)
			{
				l ++;
				r --;
				continue;
			}
			if(a[l].len < a[r].len)
			{
				a[r].len -= a[l].len;
				l ++;
				continue;
			}
			if(a[l].len > a[r].len)
			{
				a[l].len -= a[r].len;
				r --;
				continue;
			}
		}
	}
	cout << ans << "\n";
	return 0;
}
