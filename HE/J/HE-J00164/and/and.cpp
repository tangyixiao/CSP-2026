#include<bits/stdc++.h>
using namespace std;
long long n,m,ans;
long long a[200005];
long long r[100];
long long rm=1;
map<long long,bool> mp;
bool fa=true;
bool cmp(long long a,long long b)
{
	return a>b;
}
long long dfs(long long cnt,long long cm,long long z,bool f)
{
	if(cm==m+1) return ans=max(ans,z);
	if(cnt==n+1) return 0;
	
	if(f==false)
	{
		dfs(cnt+1,cm,z,false);
		dfs(cnt+1,cm+1,a[cnt],true);
	}
	dfs(cnt+1,cm+1,z&a[cnt],true);
	dfs(cnt+1,cm,z,true);
	return 0;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<=30;i++)
	{
		mp[rm]=true;
		rm*=2;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(!mp[a[i]+1]) fa=false;
	}
	if(fa)
	{
		sort(a+1,a+1+n,cmp);
		ans=a[m];
	}
	if(n<=20)dfs(1,0,0,false);
	if(m==1)
	{
		for(int i=1;i<=n;i++) ans=max(a[i],ans);
	}
	if(m==n)
	{
		ans=a[1];
		for(int i=2;i<=n;i++) ans=ans&a[i];
	}
	if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ans=max(ans,a[i]&a[j]);
			}
		}
	}
	cout<<ans;
	return 0;
}
