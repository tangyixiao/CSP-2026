#include<bits/stdc++.h>
using ll=long long;
using namespace std;
ll n,m;
ll a[500505];
struct no{
	ll x,id;
}k[300505];
ll cnt[500505];
ll tp[500505];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		cnt[a[i]]++;
		k[a[i]].x=i;
		k[a[i]].id=a[i]; 
	}
	sort(k+1,k+1+m,[](no a,no b){
		return a.x<b.x;
	});
	for(int i=1;i<=m;i++)
	{
		if(!k[i].x)continue;
		tp[a[k[i].x+1]]+=cnt[k[i].id]+tp[k[i].id];
		tp[k[i].id]+=cnt[k[i].id];
	}
	for(int i=1;i<=m;i++)
	{
		cout<<tp[i];
		if(i!=m)cout<<" ";
	}
	return 0;
}