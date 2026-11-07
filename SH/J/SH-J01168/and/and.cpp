#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
ll ans;
ll a[200005],f[200005];
void dfs(int cur,int cnt,ll val)
{
	if(cur==n+1) return ;
	if(n-cur<m) return ;
	if(cnt==m)
	{
		ans=max(ans,val);
		return ;
	}
	dfs(cur+1,cnt,val);
	if(val==-1) dfs(cur+1,cnt+1,a[cur]);
	else dfs(cur+1,cnt+1,a[cur]&val);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	bool flag=true;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		f[0]=max(f[0],a[i]);
		if(!flag) continue;
		flag=false;
		for(int j=0;j<=20;j++)
		{
			if(a[i]+1!=pow(2,j))
			{
				flag=true;
				break;
			}
		}
	}
	if(n<=20)
	{
		dfs(1,0,-1);
		cout<<ans;
		return 0;
	}
	if(m==1)
	{
		for(int i=1;i<=n;i++) ans=max(ans,a[i]);
		cout<<ans;
		return 0;
	}
	if(m==2 && n<=2000)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<i;j++) ans=max(ans,a[i]&a[j]);
		}
		cout<<ans;
		return 0;
	}
	if(m==n)
	{
		ans=a[1];
		for(int i=2;i<=n;i++) ans&=a[i];
		cout<<ans;
		return 0;
	}
	if(flag)
	{
		sort(a+1,a+n+1,greater<int>());
		cout<<a[m];
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=1;j--)
		{
			f[j]=max(f[j],f[j-1]&a[i]);
		}
	}
	cout<<f[m];
	return 0;
}
