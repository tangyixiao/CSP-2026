#include <bits/stdc++.h>
using namespace std;
int a[200010];
string s[200010];
int dp[2][200010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	bool flag=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		int tem=a[i];
		while(tem)
		{
			s[i]+=tem%2+48;
			tem/=2;
		}
		reverse(s[i].begin(),s[i].end());
		for(int j=0;j<s[i].size();j++)
		{
			if(s[i][j]=='0') flag=0;
		}
	}
	if(m==1)
	{
		int maxn=-1;
		for(int i=1;i<=n;i++)
		{
			maxn=max(maxn,a[i]);
		}
		cout<<maxn;
		return 0;
	}
	else if(m==2)
	{
		int maxn=-1;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				maxn=max(maxn,(a[i]&a[j]));
			}
		}
		cout<<maxn;
		return 0;
	}
	else if(m==n)
	{
		int ans=a[1];
		for(int i=2;i<=n;i++) ans=(ans&a[i]);
		cout<<ans;
		return 0;
	}
	else if(flag)
	{
		sort(a+1,a+n+1,greater<int>());
		cout<<a[m];
		return 0;
	}
	else cout<<0;
	return 0;
}
