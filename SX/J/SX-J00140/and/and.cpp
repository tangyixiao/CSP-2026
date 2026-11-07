#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],dp[1005][1005],mxx;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		mxx=max(a[i],mxx);
	}
	if(m==1) 
	{
		int mmax=0;
		for(int i=1;i<=n;i++)
		{
			mmax=max(mmax,a[i]);
		}
		cout<<mmax;
		return 0;
	}
	if(m==n) 
	{
		int mmax=a[1];
		for(int i=2;i<=n;i++)
		{
			mmax=(mmax&a[i]);
		}
		cout<<mmax;
		return 0;
	}
	if(m==2) 
	{
		int ax=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ax=max(ax,(a[j]&a[i]));
			}
		}
		cout<<ax;
		return 0;
	}
	if(n>=200005&&mxx>4)//A
	{
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
		return 0;
	}
	if(n>=200005&&mxx<=4)
	{
		int a3=0,a2=0,a1=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i]==3) a3++;
			if(a[i]==2) a2++;
			if(a[i]==1) a1++;
		}
		if(a3>=m) cout<<3;
		else if(a3+a2>=m) cout<<2;
		else if(a3+a1>=m) cout<<1;
		else cout<<0;
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		dp[i][1]=a[i];
	}
	for(int i=2;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int k=j+1;k<=n;k++)
			{
				dp[j][i]=max((dp[k][i-1]&a[j]),dp[j][i]);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		ans=max(ans,dp[i][m]);
	}
	cout<<ans;
	return 0;
}
