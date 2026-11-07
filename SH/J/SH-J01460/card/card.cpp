#include<bits/stdc++.h>
using namespace std;
int n,m,d;
int a[200001],f[200001];
int p[100001];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		f[i]=i;
	}
	for(int i=1;i<=n;i++)
	{
		p[a[i]]=max(f[i],p[a[i]]);
	}
	for(int i=1;i<=m;i++)cout<<p[i]<<' ';
	return 0;
}

