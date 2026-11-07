#include <bits/stdc++.h>
using namespace std;
int a[200010],dp[5][200010],v[200010],mx,ans=(1<<30)-1,n,m;
//void dfs(int u)
//{
//	if (u==m+1)
//	{
//		mx=max(mx,ans);
//		//cout<<ans<<endl;
//		return;
//	}
//	for (int i=1;i<=n;i++)
//	{
//		if (v[i])
//		{
//			continue;
//		}
//		int t=ans;
//		ans&=a[i];
//		v[i]=1;
//		//cout<<u<<" "<<i<<" "<<a[i]<<" "<<ans<<endl; 
//		dfs(u+1);
//		v[i]=0;
//		ans=t;
//	}
//}
void subtask1()
{
	sort(a+1,a+n+1);
	ans=(1<<30)-1;
	for (int i=n;i>=n-m+1;i--)
	{
		ans=ans&a[i];
	}
	cout<<ans;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int f=1;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		int x=a[i];
		while (x)
		{
			if (x&1==0)
			{
				f=0;
			}
			x>>=1;
		}
	}
	if (f==1)
	//dfs(1)
	{
		subtask1();
		return 0;
	}
//	for (int i=1;i<=m;i++)
//	{
//		int mx=0;
//		for (int j=1;j<=n;j++)
//		{
//			mx=max(mx,dp[i-1]^a[j]);
//		}
//		dp[i]=mx;
//	}
	for (int i=1;i<=2;i++)
	{
		dp[i&1][0]=(1<<30)-1;
	}
	//dp[0][0]=0;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			dp[i&1][j]=dp[(i-1)&1][j];
			if (j>=1)
			{
				//cout<<dp[(i-1)&1][j]<<"#"<<dp[(i-1)&1][j-1]<<"#"<<a[i]<<endl;
				dp[i&1][j]=max(dp[(i-1)&1][j],dp[(i-1)&1][j-1]&a[i]);
			}
			//cout<<dp[i&1][j]<<" ";
		}
		//cout<<endl;
	}

	cout<<dp[n&1][m];
	return 0;
}
