#include<iostream>
#include<algorithm>
using namespace std;
long long a[200006];
long long ans=0;
int n,m;
void dfs(int u,long long cnt)
{
	if (u>m)
	{
		ans=max(ans,cnt);
		return ; 
	}
	dfs(u+1,ans&a[u+1]);
	dfs(u+1,ans);
}
int main()
{
	//freopen("and.in","r",stdin);
	//freopen ("ans.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if (n==m)
	{
		ans=a[1];
		for(int i=2;i<=n;i++)ans&=a[i];
	}
	else if(m==1)
	{
		for(int i=1;i<=n;i++)
		{
			if (a[i]>ans)ans=a[i];
		}
	}
	else if (m==2)
	{
		
		for(int i=1;i<=n;i++)
		{
			for(int j=i;j<=n;j++)
			{
				ans=max(ans,a[i]&a[j]);
			}
		}
	}
	else
	dfs(1,a[1]);
	cout<<ans;
	return 0;
}//2026.10.31 11:07:29 ¸å2 Ô¤¹ÀµÃ·Ö£º20~25
