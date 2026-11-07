#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, s, ans;
struct str
{
	ll k;
	ll l, r;
	char x;
}p[200005];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> p[i].k >> p[i].x;
		p[i].l = s + 1, s += p[i].k, p[i].r = s;
	}
	ll l = 1, r = s;
	for(int i = 1, j = n; i < j && l < r;)
	{
		ll m = min(p[i].r - l + 1, r - p[j].l + 1);
		if(p[i].x != p[j].x)
			ans += m;
		l += m, r -= m;
		//printf("%d %c [%d, %d]=%d / %d %c [%d, %d]=%d / %d %d %d \n", 
		//i, p[i].x, p[i].l, p[i].r, p[i].k, j, p[j].x, p[j].l, p[j].r, p[j].k, l, r, ans);
		if(p[i].r < l) i++;
		if(r < p[j].l) j--;
	}
	cout << ans;  
	return 0;
}
