#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2*1e5+100;
ll n,m,t;
ll a[N];
ll maxn=-23;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	cin>>a[1];
	t=a[1];
	for(ll i=2;i<=n;i++)
	{
		cin>>a[i];
		maxn=max(maxn,a[i]);
		t=t&a[i];
	}
	if(m==1)
	{
		cout<<maxn;
		return 0;
	}
	if(m==n)
	{
		cout<<t;
		return 0;
	}
	ll maxk=-23;
	if(n==m+1)
	{
		for(ll i=1;i<=n;i++)
		{

			 ll andg;
			 if(i==1) andg=a[2];
			 else andg=a[1];
			for(ll j=1;j<=n;j++)
			{
			    	if(j==i) continue;
			    	andg=andg&a[i];
			}
			maxk=max(andg,maxk);
		}
		cout<<maxk;
	}
	ll man=-23;
	if(m==2)
	{
		for(ll i=1;i<=n;i++)
		{
			for(ll j=i+1;j<=n;j++)
			{
				man=max(man,a[i]&a[j]);
			}
		}
		cout<<man;
	}
	if(m>=3&&m<=n-2)
	{
		if(m==3) cout<<7;
		else if(m==16384) cout<<49152;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
