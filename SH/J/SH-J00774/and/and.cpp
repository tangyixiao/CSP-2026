#include <bits/stdc++.h>
#define ll long long
#define maxl 30
using namespace std;
int n, m;
ll ans = (1 << 30) - 1;
vector<ll> p, k;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(ll i = 1, x; i <= n; i++)
		cin >> x, p.push_back(x);
	for(ll i = maxl; i >= 0; i--)
	{
		n = p.size();
		for(int j = 0; j < n; j++)
			if(p[j] & (1LL << i))
				k.push_back(p[j]);
		if(k.size() >= m)
			p = k;
		k. clear();
	} 
	for(int i = 0; i < m; i++)
		ans &= p[i];
	cout << ans;
	return 0;
}
