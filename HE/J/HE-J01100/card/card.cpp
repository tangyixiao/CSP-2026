#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 5e6 + 10;
ll a[N], n, m, ans[N], cnt[N], mmmm[N];
deque<ll> v;
vector<ll> s;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(ll i = 1;i <= n;++i)cin >> a[i];
	if(n <= 5000 && m <= 3000)
	{
		vector<ll> zmjjkk;
		
		for(ll i = 1;i <= n;++i)
		{
			zmjjkk.push_back(a[i]);
			if(a[i] == a[i + 1])
			{
				zmjjkk.pop_back();
				zmjjkk.pop_back();
			}
		}
		for(ll i = 1;i <= n;++i)
		{
			if(zmjjkk[i] <= m)mmmm[zmjjkk[i]]++;
			}
		for(ll i = 1;i <= m;++i)
		{
			cout << mmmm[i] << ' ';
		}
		return 0;
	}
	for(ll i = 1;i <= n;++i)
	{
		memset(cnt, 2, sizeof cnt);
		ll x = INT_MIN;
		for(ll j = i;j <= n;++j)
		{
			cnt[a[j]]--;
			x =max(x, a[j]);
			if(cnt[a[j]] == 0)
				for(ll k = 1;k <= x;++k)
					while(cnt[k] != 0)
					{
						v.pop_front();
						s[k] = 0;	
					}
			v.push_front(a[j]);
			s.push_back(a[j]);
		}
		for(auto j : v)
			if(s[j] != 0)ans[s[j]]++;
		while(!v.empty())v.pop_front();
	} 
	for(ll i = 1;i <= m;++i)
		cout << ans[i] << ' ';
	return 0;
}
