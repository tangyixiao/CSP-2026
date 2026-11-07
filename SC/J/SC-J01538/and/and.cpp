#include<bits/stdc++.h>
using namespace std;

int n,m;
int  a[200005];
bool s[200005][30];
int dp[200005][205];
int ans;




int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		for(int i=1;i<=n;i++)
		{
			ans=max(ans,a[i]);
		}
	}
	else if(m==2)
	{
		for(int i=1;i<n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				ans=max(ans,a[i]&a[j]);
			}
		}
	}
	cout<<ans;
	return 0;
}