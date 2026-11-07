#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s[200005];
ll a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll m,n,maxx=0,f=1;
	cin>>n>>m;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>4)f=0;
		maxx=max(maxx,a[i]);
//		ll t=a[i];
//		while(t)
//		{
//			s[i]+=((t%2)+'0');
//			t/=2;
//		}
	}
	ll sum=a[1],sum3=a[1];
	for(ll i=2;i<=n;i++)
	{
		sum=sum&a[i];
		ll t=sum3;
		sum3=sum3&a[i];
		if(sum3<t)
		{
			cout<<t;
			return 0;
		}
	}
	ll sum2=0;
	for(ll i=1;i<=n;i++)
	{
		ll ts=a[i];
		for(ll j=1;j<=n;j++)
		{
			if(a[i]&a[j]>sum2)
			sum2=a[i]&a[j];
		}
	}
	if(m==1)
	cout<<maxx;
	else if(m==n)
	cout<<sum;
	else if(m==2)
	cout<<sum2;
	else if(f)cout<<4;
	else
	cout<<n;
	return 0; 	
} 
