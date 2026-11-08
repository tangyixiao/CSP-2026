#include<bits/stdc++.h>
using namespace std;
int a[200005];
int vis[200005];
int dp[1005][1005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m;cin>>n>>m;
	int hyw[10005];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int ma=0;
	for(int i=1;i<=n;i++)
	{
		cout<<hyw[i]<<" ";
	}
	return 0;
}
