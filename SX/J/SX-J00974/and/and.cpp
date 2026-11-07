#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+10;
ll n,m,a[N],maxx=LLONG_MIN;
void dfs(ll k,ll x,ll ans)
{
	if(k==m+1)
	{
		maxx=max(maxx,ans);
		return;
	}
	for(int i=x+1;i<=n;i++)
		dfs(k+1,i,(ans&a[i]));
}
bool check_B()
{
	for(int i=1;i<=n;i++)
		if(a[i]!=i-1)
		 	return false;
	return true;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	if(m==1)
	{
		for(int i=1;i<=n;i++)
			maxx=max(maxx,a[i]);
		cout<<maxx;
		return 0;
	}
	if(m==2)
	{
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				maxx=max(maxx,(a[i]&a[j]));
		cout<<maxx;
		return 0;
	}
	if(m==n-1)
	{
		sort(a+1,a+n+1);
		ll ans1=n;
		for(int i=n-1;i>=2;i--)
			ans1&=a[i];
		cout<<ans1;
		return 0;
	}
	if(check_B())
	{
		sort(a+1,a+n+1);
		ll ans=n,p=1;
		for(int i=n-1;i>=1;i--)
		{
			if(p<=m)
			{
				ans=ans&a[i];
				p++;
			}
		}
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++)
		dfs(2,i,a[i]);
	cout<<maxx;
	return 0;
}