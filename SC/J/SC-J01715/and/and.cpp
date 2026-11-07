#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],f[2005][2005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]; 
	}
	f[1][1]=a[1];
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			f[i][j]=max(f[i-1][j-1]&a[i],f[i-1][j]);
		}
	}
	cout<<f[n][m];
	return 0;
} 