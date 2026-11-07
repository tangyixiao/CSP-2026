#include<bits/stdc++.h>
#define ll int
using namespace std;
ll n,m,a[200005],qzs[200005][40],ans;
int main() 
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++)
	{
		ll t=a[i],id=0;
		while(t)
		{
			if(t&1) qzs[i][id]=qzs[i-1][id]+1;
			else qzs[i][id]=qzs[i-1][id];
			id++;
			t>>=1;
		}
	}
	ll y=1;
	for(int i=1;i<=n-m+1;i++)
	{
		ll ed=i+m-1,xx=0;
		y=1;
		for(int j=0;j<=30;j++)
		{
			ll x=qzs[ed][j]-qzs[i-1][j];
			if(x==m)
			{
				xx+=y;
			}
			y*=2;
		}
		ans=max(ans,xx);
	}
	cout<<ans;
	return 0;
}
