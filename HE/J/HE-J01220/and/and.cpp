#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ma,mb;
int a[200010],sum,ans;
int dfs(int k,int o)
{
	if(o==0)
	{
		sum=a[k];
	}
	if(o==m)//—°πª¡À 
	{
		ans=max(sum,ans);
		return ans;
	}
	for(int i=k+1;i<=n;i++)
	{
		sum&=a[i];
		dfs(i+1,o+1);			
	} 	
}
bool su(int g)
{
	int l=1;
	for(int i=1;i<=g;i++)
	{
		l*=2;
		if(l==g)
		return true;
		if(l>g)
		return false;
	}
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	bool f=true;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		ma=max(ma,a[i]);
	}
	mb=a[1];
	for(int i=2;i<=n;i++)
	{
		mb&=a[i];
	}
	if(m==1)
	{
		cout<<ma;
		return 0;
	}
	if(m==n)
	{
		cout<<mb;
		return 0;
	}
	if(su(n))
	{
		bool h=true;
		for(int i=1;i<=n;i++)
		{
			if(a[i]!=i-1)
			{
				h=false;
				break; 
			}
		}
		if(h)
		{
			cout<<a[n-m+1];
			return 0;
		}
	}
	cout<<dfs(1,0);
	return 0;
}
