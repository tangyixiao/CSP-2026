#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
long long ans=0;
void dfs(int idx,int num,long long sum)
{
	if(idx>n||num>=m)
	{
		if(num==m)
			ans=max(ans,sum);
		return ;
	}
	for(int i=0;i<=1;i++)
	{
		if(i==1)
		{
			if(num==0)
			{
				dfs(idx+1,num+1,a[idx]);
			}
			else
			{
				dfs(idx+1,num+1,sum&a[idx]);
			}
		}
		else
		{
			dfs(idx+1,num,sum);
		}
	}
}
int main() 
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
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