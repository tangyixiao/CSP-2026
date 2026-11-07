#include<bits/stdc++.h>
using namespace std;
int n,m;
long long ans;
long long a[200010];
int f[200010];
void dfs(int start,int tot,long long sum)
{
	if(tot==m)
	{
		ans=max(ans,sum);
		return;
	}
	for(int i=start;i<=n;i++)
	{
		if(f[i]==0)
		{		
//			cout<<tot<<" "<<sum<<" "<<a[i]<<endl;
			f[i]=1;
			if(tot==0)
			dfs(i+1,tot+1,a[i]);
			else
			dfs(i+1,tot+1,sum&a[i]);
			f[i]=0;
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
	}
	dfs(1,0,0);
	cout<<ans;
	return 0;
}