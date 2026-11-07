#include<bits/stdc++.h> 
using namespace std;
int n,m,a[200005],maxv;

void dfs(int x,int pos,int res)
{
	if(x>m) return;
	else if(x==m)
	{
		maxv=max(maxv,res);
		return;
	}
	for(int i=pos+1;i<=n;i++)
	{
		dfs(x+1,i,(res==-1)?a[i]:(res&a[i]));
	}
}


int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=20)
	{
		dfs(0,0,-1);
		cout<<maxv;
	}
	else if(m==1)
	{
		for(int i=1;i<=n;i++)
			maxv=max(maxv,a[i]);
		cout<<maxv;
	}
	else if(m==n)
	{
		int ans=a[1];
		for(int i=2;i<=n;i++)
			ans=ans&a[i];
		cout<<ans;
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				maxv=max(maxv,a[i]&a[j]);
			}
		}
		cout<<maxv;
	}
	else
	{
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
	}
	return 0;
}
