#include <bits/stdc++.h>
using namespace std;
int n,a[200005],m; 
/*
int mian()
*/
int main()
{
	//搜索(记忆?) 
	//背包dp?
	//位作为物品X 
//	/*
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
//	*/
	cin>>n>>m;
	vector< vector<int> > dp(n+5,vector<int>(m+5));
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		dp[i][1]=a[i];
	}
	for(int i=2;i<=n;i++)
		for(int v=2;v<=m;v++)
		{
			for(int j=1;j<i;j++)
				dp[i][v]=max(dp[i][v],dp[j][v-1]&a[i]);
		}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans=max(ans,dp[i][m]);
	}
	cout<<ans;
	return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int n,a[200005],m,ans;
int w[32];
int main()
{
 
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int mawi=-1;
	for(int i=29;i>=0;i--)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[j]&(1<<i))
				w[i+1]++;
		}
		if(w[i+1]>=m)
		{
			ans+=(1<<i);
			mawi=i+1; 
			break;
		}
	}//找每一位有多少数有 //找最高的位mawi 
	vector<int> vl;
	for(int i=1;i<=n;i++)
		vl.push_back(a[i]);
	bool flag=false;
	while(!flag)
	{
		vector<int> v;
		int we[32];
		for(int i=0;i<vl.size();i++)
		{
			if(a[i]&(1<<(mawi-1)))
				v.push_back(a[i]);
		}//可能是最大值的候选名单
		flag=true;
		for(int i=mawi-1;i>0;i--) 
		{
			for(int j=0;j<v.size();j++)
			{
				if(v[j]&(1<<(i-1)))
					we[i]++;
			} 
			
		}
		for(int i=mawi-1;i>0;i--) 
		{
			if(we[i]>=m)
			{
				ans+=1<<(i-1);
				mawi=i; 
				flag=false;
			}
		}
		vl.clear();
		vl=v;
//		for(int j=0;j<v.size();j++)
//			cout<<v[j]<<' ';
//		cout<<'!'<<mawi;
	}
	cout<<ans;
	return 0;
}
}*/
