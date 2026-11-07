#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
ll n, m, a[N], maxn = -1, x = 1;
ll mand(ll g, vector<ll> x)
{
	if(g == 2)
	{
		return x[0] & x[1];
	}
	ll sum = (x[0] & x[1]);
	for(ll i = 2; i <= g; i++)
	{
		sum &= x[i];
	}
	return sum;
}
vector<ll> b;
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(ll i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for(ll i = 1; i <= n - m + 1; i++)
	{
		b.push_back(a[i]);
		for(int j = 1; j <= m - 1; j+=i)
		{
			b.push_back(a[i + j]);
		}
		ll mi = mand(m, b);
		maxn = max(mi, maxn);
		b.clear();
	}
	cout << maxn;
	return 0;
} 
