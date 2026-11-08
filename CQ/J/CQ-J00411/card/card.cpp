#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=5e5+5;
ll a[N],ans[N],cnt[N],pos[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ll n,m; cin >>n>>m;
	for (ll i=1;i<=n;i++) cin >>a[i];
	for (ll k=1;k<=n;k++)
	{
		for (ll i=k;i<=n;i++)
		{
			if (pos[a[i]])
			{
				for (ll j=pos[a[i]];j<i;j++) pos[a[j]]=0;
			} 
			pos[a[i]]=i;
		}
		for (ll i=1;i<=m;i++) {ans[i]+=(pos[i]>0);pos[i]=0;}
	}
	for (ll i=1;i<=m;i++) cout <<ans[i]<<' ';
	return 0;
 }
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/
