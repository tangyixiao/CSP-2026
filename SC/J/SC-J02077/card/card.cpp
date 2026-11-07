#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],ans[M],r[M];
bool f=1;
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		r[a[i]]=i;
		if(a[i]>a[i-1])f=0;
	}
	if(f)
	{
		for(int i=1;i<=m;i++)cout<<r[i]<<' ';
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;)
		{
			ans[a[j]]++;
			j=r[a[j]]+1;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
