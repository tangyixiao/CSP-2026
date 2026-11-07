#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m,ans=0;
	cin>>n>>m;
	ll a[n+10]={0};
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		sort(a,a+n);
		cout<<a[1];
		return 0;
	}
	if(m==2)
	{
		for(int i=0; i<=n-1; i++)
		{
			for(int j=i+1; j<=n; j++)
			{
				ans=max(((ll)a[i]&(ll)a[j]),ans);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n)
	{
		ans=a[0];
		for(int i=1;i<n;i++)
		{
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	cout<<ans;
}

