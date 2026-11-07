#include<bits/stdc++.h> 
using namespace std;
int flag[2*100005],a[2*100005],maxn=0,n,m;
void dfs(int x,int ans)
{
	if(x==0)
	{
		maxn=max(maxn,ans);
		//cout<<"m"<<maxn<<" ";
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		if(x==m) ans=a[i];
		//cout<<ans<<" ";
		if(flag[i]==0)
		{
			flag[i]=1;
			dfs(x-1,ans&a[i]);
			flag[i]=0;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	dfs(m,0);
	cout<<maxn;
	return 0;
}