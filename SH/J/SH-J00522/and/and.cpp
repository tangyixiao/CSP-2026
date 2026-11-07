#include<bits/stdc++.h>
using namespace std;

#define int long long
int n,m;

signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1)
	{
		int maxn=-1e9;
		for(int i=1;i<=n;i++) maxn=max(maxn,a[i]);
		cout<<maxn;
	}
	else if(m==n)
	{
		int ans=a[1];
		for(int i=2;i<=n;i++) ans&=a[i];
		cout<<ans;
	}
	else if(m==2)
	{
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
	}
	else if(m==n-1)
	{
		int maxn;
		for(int i=1;i<=n;i++)
		{
			int cur=(i==1?a[2]:a[i-1]);
			for(int j=1;j<=n;j++)
			{
				if(j==i) continue;
				else cur&a[j];
			}
			maxn=max(maxn,cur);
		}
		cout<<maxn;
	}
	else
	{
		sort(a.begin()+1,a.end());
		cout<<a[n-m+1];
	}
	return 0;
}
