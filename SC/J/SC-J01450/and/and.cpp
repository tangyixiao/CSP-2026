#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[200010];
bool v[200010];
int n,m,max_;
void dfs(int cnt,int ans)
{
	if(cnt==m)
	{
		max_=max(max_,ans);
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		if(!v[i])
		{
			v[i]=1;
			if(cnt==0)
			{
				dfs(cnt+1,a[i]);
			}
			else
			{
				dfs(cnt+1,ans&a[i]);
			}
			v[i]=0;
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
	dfs(0,1);
	cout<<max_;
	
	return 0;
}