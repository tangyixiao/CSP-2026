#include<bits/stdc++.h>
using namespace std;
long long a[200005],b[200005];
long long n,m,ans=-1;
void dfs(long long pos,long long val)
{
	if(pos==m+1)
	{
		ans=max(ans,val);
		return;
	}
	for(long long i = 1;i <= n;i++)
	{
		if(b[i]==1)continue;
		b[i]=1;
		dfs(pos+1,val&a[i]);
		b[i]=0;
	}
	return;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    memset(b,0,sizeof(b));
    for(long long i = 1;i <= n;i++)
	{
		cin>>a[i];
	} 
	if(m==1)
	{
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	if(m==n)
	{
		long long s = -1;
		for(long long i = 1;i <= n;i++)
		{
			s=s&a[i];
		}
		cout<<s;
		return 0;
	}
	if(m==n-1)
	{
		long long ans=0;
		for(long long i = 1;i <= n;i++)	
		{
			long long s=-1;
			for(long long j = 1;j <= n;j++)
			{
				if(j==i)continue;
				s=s&a[j];
			}
			ans=max(s,ans);
		}
		cout<<ans;
		return 0;
	}
	dfs(1,-1);
	cout<<ans;
    return 0;
}
