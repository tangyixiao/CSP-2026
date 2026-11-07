#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int a[200005];
int cnt[105],f[105];
int t;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<=29;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[j]&(1<<i)) cnt[i]++;
		}
	}
	for(int i=29;i>=0;i--)
	{
		if(cnt[i]>=m)
		{
			f[i]=1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=29;j++)
		{
			if(f[j]==0&&(a[i]&(1<<j))) a[i]-=(1<<j);
		}
	}
	sort(a+1,a+n+1);
	ans=a[n];
	for(int i=n-1;i>=n-m+1;i--)
	{
		ans&=a[i];
	}
	cout<<ans;
	return 0;
} 