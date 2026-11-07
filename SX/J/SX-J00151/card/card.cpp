#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=5e5+5;
ll n,m,c[N],last[N],d[N],b,ans[N];
ll minn[N],maxx[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++)
		cin>>c[i];
	if(m<=2)
	{
		maxx[n]=minn[n]=c[n];
		for(ll i=n-1;i>=1;i--)
		{
			maxx[i]=max(c[i],maxx[i+1]);
			minn[i]=min(c[i],minn[i+1]);
		}
		for(ll i=1;i<=n;i++)
		{
			if(maxx[i]==2&&minn[i]==1)
			{
				ans[1]++;
				ans[2]++;
			}
			else ans[maxx[i]]++;
		}
		cout<<ans[1]<<" "<<ans[2];
		return 0;
	}
	for(ll i=1;i<=n;i++)
	{
		for(ll j=i;j<=n;j++)
		{
			if(last[c[j]])
			{
				ll ppp=last[c[j]];
				for(ll k=b;k>=ppp;k--)
				{
					last[d[k]]=0;
					b--;
				}
			}
			d[++b]=c[j];
			last[c[j]]=b;
	//		for(ll k=1;k<=b;k++)
	//			cout<<d[k];
	//		cout<<"\n";
		}
		for(ll j=1;j<=b;j++)
			ans[d[j]]++;
	//	cout<<"---------------\n";
		b=0;
		for(ll j=1;j<=m;j++)
			last[j]=0;
	}
	for(ll i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}
/*
#1~9
#15~17
#20
48pts
*/