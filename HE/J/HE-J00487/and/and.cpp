#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=2*1e4+5;
int a[N];
int dp[N];
bool cmp(int p,int q)
{
	return p>q;
}

signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n==m)
	{
		int ans=a[1];
		for(int i=2;i<=n;i++) ans&=a[i];
		cout<<ans;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	if(m==1)
	{
		cout<<a[1];
		return 0;
	}
	if(m==2)
	{
		cout<<a[1]&a[2];
		return 0;
	}
	dp[1]=a[1];
	
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=1;j--)
		{
			dp[j]=max(dp[j],(dp[j-1]&a[i]));
			
		}
	}
	cout<<dp[m];
	return 0;
}
