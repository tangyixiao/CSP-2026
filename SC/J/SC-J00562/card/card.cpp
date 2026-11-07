#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=5*1e5+10;
ll n,m;
ll f[N];
ll p[N];
ll ans[N];
stack<ll> a;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>f[i];
	for(ll i=1;i<=n;i++)
	{
		for(ll j=i;j<=n;j++)
		{
			if(!a.empty()&&p[f[j]]!=0)
			{
				while(p[f[j]]!=0)
				{
					while(a.top()!=f[j])
					{
						p[a.top()]--;
						a.pop();
					}
					p[a.top()]--;
					a.pop();
				}
			}
			a.push(f[j]);
			p[f[j]]++;
		}
		while(!a.empty())
		{
			ans[a.top()]++;
			a.pop();
		}
		memset(p,0,sizeof p);
	}
	for(ll i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}