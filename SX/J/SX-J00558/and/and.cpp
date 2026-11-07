#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N];
int n,m,mmax=-1,ans;
bool vis[N];
void dfs(int x,int step)
{
	if(step==m)
	{
		mmax=max(mmax,ans);
		return;
	}
	int t=ans;
	for(int i=x+1;i<=n;i++)
	{
		if(vis[i])
		{
			continue;
		}
		vis[i]=1;
		ans&=a[i];
		dfs(i,step+1);
		vis[i]=0;
		ans=t;
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
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
		ans=a[1];
		for(int i=2;i<=n;i++)
		{
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(n<=2000)
	{
		ans=1048575;
		dfs(0,0);
		cout<<mmax;
		return 0;
	}
	sort(a+1,a+n+1);
	ans=a[n];
	for(int i=n;i>=n-m+1;i--)
	{
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}
