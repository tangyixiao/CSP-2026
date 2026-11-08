#include <bits/stdc++.h>
using namespace std;

namespace Carrot {
	using ll = long long;
	ll n, m, top;
	ll a[500005], vis[300005], stk[500005], sum[300005];
	
	void anss()
	{
		cin >> n >> m;
		for(ll i = 1; i <= n; i ++) cin >> a[i];
		for(ll i = 1; i <= n; i ++)
		{
			top = 0;
			memset(vis, 0, sizeof(vis));
			for(ll j = i; j <= n; j ++)
			{
				if(vis[a[j]])
					while(stk[top] != a[j])
						vis[stk[top]] = 0, top --;
				stk[++top] = a[j];
				vis[a[j]] = top;
			}
			for(ll j = 1; j <= m; j ++)
				if(vis[j]) sum[j] ++;
		}
		for(ll i = 1; i <= m; i ++) cout << sum[i] << " ";
	}
}

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	Carrot::anss();
	
	return 0;
}
