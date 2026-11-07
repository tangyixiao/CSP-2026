#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long f[2005][2005],g[2005][2005],a[2005];
long long n,m;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)f[i][1]=a[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(j)
			f[i][j]=max({f[i][j],g[i-1][j-1]&a[i],f[i-1][j-1]&a[i]});
			g[i][j]=max(g[i-1][j],f[i-1][j]);
		}
	}
	cout<<max(f[n][m],g[n][m]);
}
