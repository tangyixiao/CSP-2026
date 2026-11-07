#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define il inline
using namespace std;
int n,m,a[500010],lst[300010],cnt[300010];
bool vist[300010];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		lst[a[i]]=i;
	}
	for(int i=1;i<=n;i++)
	{
		memset(vist,false,sizeof(vist));
		for(int j=i;j<=n;j=lst[a[j]]+1)
		{
			if(vist[a[j]])continue;
			vist[a[j]]=true;
			cnt[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<' ';
	return 0;
}
//TLE