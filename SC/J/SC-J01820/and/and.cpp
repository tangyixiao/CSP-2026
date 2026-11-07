#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
struct node
{
	int num, id;
} len[N];
int n, m, a[N];
int ans = 0;
int zhuan(int n)
{
	int l = 0;
	while(n != 0)
	{
		if(n % 2)
		{
			l ++;
		}
		n /= 2;
	}
	return l;
}
bool cmp(node x, node y)
{
	return x.num < y.num;
}
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		len[i].num = zhuan(a[i]);
		len[i].id = i;	
	}
	sort(len + 1, len + n + 1, cmp);
	ans = a[len[n].id];
	for(int i = n - 1; i >= n - m + 1; i --)
	{
		ans = ans & a[len[i].id];
	}
	cout << ans << '\n';
	return 0;
}