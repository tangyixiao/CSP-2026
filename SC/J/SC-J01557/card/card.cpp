#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ll n,m;
	cin >> n >> m;
	vector<ll> a(n+1);
	map<ll,ll> ans;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++)
	{
		map<ll,pair<ll,bool>> mp;
		ll t[200005];
		ll l = 1;
		for(int j = i;j <= n;j++)
		{
			if(mp[a[j]].second == false)
			{
				mp[a[j]].first = l;
				t[l++] = a[j];
				mp[a[j]].second = true;
			}
			else
			{
				for(int k = mp[a[j]].first;k <= l;k++)
				{
					t[k] = 0;
				}
				l = mp[a[j]].first;
				t[l++] = a[j];
			}
		}
		for(int j = 1;j <= l-1;j++)
		{
			ans[t[j]]++;
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}