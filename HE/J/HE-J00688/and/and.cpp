#include <bits/stdc++.h>
using namespace std;
long long a[1000010],dp[1000010];
long long n,m,maxx=-1;
bool cmp(int a,int b)
{
	return a>b;
}
void dfs(long long  x,long long  ans,long long last)
{
	if(x==m)
	{
		maxx=max(maxx,ans);
		return;
	}
	for(int i=last;i<=n;i++)
	{
		dfs(x+1,ans&a[i],i+1);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	sort(a+1,a+1+n,cmp);
	if(m==2)
	{
		long long maxxx=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				maxxx=max(maxxx,a[i]&a[j]);
			}
		}
		cout<<maxxx;
	}
	else if(m==n-1)
	{
		dfs(0,a[1],1);
	    cout<<maxx;
	}
	else if(n<=20){
		dfs(0,a[1],1);
	    cout<<maxx;
	}
	else if(m==1) cout<<a[1];
	else if(m==n)
	{
		long long ans=a[1];
		for(int i=1;i<=n;i++)
		{
			ans&=a[i];
		}
		cout<<ans;
	}
	else{
		cout<<a[m];
	}
	return 0;
}
