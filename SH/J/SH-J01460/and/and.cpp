#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200001];
int f[200001];
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
    f[0]=INT_MAX;
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=1;j--)
		{
			f[j]=max(f[j],f[j-1]&a[i]);
		}
	}
	cout<<f[m];
	return 0;
}

