#include<bits/stdc++.h>
using namespace std;
int a[200010],dp[200010],vis[200010];
bool judge(int x)
{
	while(x%2==0)
	{
		x/=2;
	}
	if(x!=1)
	{
		return false;
	}
	return true;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int f1=1,f2=1;
	if(!judge(n))
	{
		f2=0;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(!judge(a[i]+1))
		{
			f1=0;
		}
		if(a[i]!=i-1)
		{
			f2=0;
		}
	}
	if(f1)
	{
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	if(f2)
	{
		if(m>n/2)
		{
			cout<<0;
		}
		else
		{
			long long ans=0;
			while(m<=n/2)
			{
				ans+=n/2;
				n/=2;
			}
			cout<<ans;
		}
		return 0;
	}
	if(m==1)
	{
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	if(m==n)
	{
		int ans=a[1];
		for(int i=2;i<=n;i++)
		{
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==2)
	{
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1)
	{
		int ans=0,cnt;
		for(int i=1;i<=n;i++)
		{
			if(i==1)
			{
				cnt=a[2];
				for(int j=3;j<=n;j++)
				{
					cnt&=a[j];
				}
				ans=max(ans,cnt);
			}
			else
			{
				cnt=a[1];
				for(int j=2;j<=n;j++)
				{
					if(i==j)
					{
						continue;
					}
					cnt&=a[j];
				}
				ans=max(ans,cnt);
			}
		}
		cout<<ans;
		return 0;
	}
	sort(a+1,a+n+1);
	dp[1]=a[n];
	vis[n]=1;
	for(int i=2;i<=m;i++)
	{
		int mx=0,cnt;
		for(int j=1;j<=n;j++)
		{
			if(vis[j]==0&&(dp[i-1]&a[j])>mx)
			{
				mx=(dp[i-1]&a[j]);
				cnt=j;
			}
		}
		vis[cnt]=1;
		dp[i]=mx;
	}
	cout<<dp[m];
}
