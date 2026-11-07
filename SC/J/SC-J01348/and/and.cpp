#include<bits/stdc++.h>
using namespace std;
int maxx=0;
void dfs(int deep,int n,int ans,const vector<int> &a,vector<bool> &vis)
{
	if(deep==n+1)
	{
		maxx=max(maxx,ans);
		return;
	}
	for(int i=1;i<a.size();i++){
		if(vis[i])continue;
		vis[i]=true;
		if(deep==1)ans=a[i];
		dfs(deep+1,n,ans&a[i],a,vis);
		vis[i]=false;
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,m,cinmaxx=0;
	cin>>n>>m;
	vector<int>a(n+1);
	vector<bool> vis(n+1,false);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cinmaxx=max(cinmaxx,a[i]);
	}
	if(n<=20)
	{
		dfs(1,m,0,a,vis);
		cout<<maxx;
	}
	else if(n<=2000 && n>20)
	{
		if(m==1)
		{
			cout<<cinmaxx;
		}
		else if(m==n)
		{
			int ans;
			bool flag=true;
			for(int i=1;i<=n;i++){
				if(flag)
				{
					flag=false;
					ans=a[i];
				}
				ans&=a[i];
			}
			cout<<ans;
		}
		else if(m==2)
		{
			int ans=0;
			for(int i=1;i<=n;i++){
				for(int j=i;j<=n;j++){
					ans=max(ans,a[i]&a[j]);
				}
			}
			cout<<ans;
		}
	}
	return 0;
}