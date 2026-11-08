#include<bits/stdc++.h>
using namespace std;
const int MAXN=2005;
const int N=INT_MAX;
int n,m,ans;
int a[MAXN],vis[MAXN];
bool f1=true,f2=true; 
void solve1()
{
	for(int i=1;i<=n;i++)
	{
		ans=max(ans,a[i]);
	}
}

void solve2()
{
	ans=a[1];
	for(int i=2;i<=n;i++)
	{
		ans=ans&a[i];
	}
}

void solve3()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i!=j)
			{
				int x=a[i]&a[j];
				ans=max(ans,x);
			}
		}
	}
}

void dfs(int step,int sum)
{
	if(step==m+1)
	{
		ans=max(ans,sum);
	}
	else if(step==1)
	{
		for(int i=1;i<=n;i++)
		{
			vis[i]=1;
			dfs(step+1,a[i]);
			vis[i]=0;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			vis[i]=1;
			dfs(step+1,a[i]&sum);
			vis[i]=0;
		}
	}
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if((a[i]+1)&a[i]!=0)f1=false;
		if(a[i]!=i-1)f2=false;
	}
	if(m==1)
	{
		solve1();
		cout<<ans;
		return 0;
	}
	else if(m==n)
	{
		solve2();
		cout<<ans;
		return 0;
	}
	else if(m==2)
	{
		solve3();
		cout<<ans;
		return 0;
	}
	else if(n<=20)
	{
		dfs(1,0);
		cout<<ans;
		return 0;
	}
	else if(f1)
	{
		sort(a+1,a+n+1);
		ans=a[n];
		int cnt=n;
		while(m--)
		{
			ans=ans&a[cnt];
			cnt--;
		}
		cout<<ans;
		return 0;
	}
	else if(f2)
	{
		sort(a+1,a+n+1);
		ans=a[n];
		int cnt=n;
		while(m--)
		{
			ans=ans&a[cnt];
			cnt--;
		}
		cout<<ans;
		return 0;
	}
}
