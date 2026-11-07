#include <bits/stdc++.h>
using namespace std;
const int N=500005;
int n,m,a[N],d[N],lst[N],sum[N],cnt[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool f=true;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		if (a[i]<a[i-1]) f=false;
	}
	if (f)
	{
		for (int i=1;i<=n;i++)
		{
			cnt[a[i]]++;
			if (a[i]!=a[i-1])
			{
				cnt[a[i]]+=cnt[a[i-1]];
			}
		}
		for (int i=1;i<=m;i++)
			cout<<cnt[i]<<" ";
		return 0;
	}
	for (int i=n;i>=1;i--)
	{
		d[i]++;
		if (lst[a[i]]==0) 
		{
			lst[a[i]]=i;
			d[n+1]--;
		}
		else
		{
			d[i]--;
			d[lst[a[i]]]++;
		}
	}
	for (int i=1;i<=n;i++)
	{
		sum[i]=sum[i-1]+d[i];
		cnt[a[i]]+=sum[i];
	}
	for (int i=1;i<=m;i++)
		cout<<cnt[i]<<" ";
	return 0;
}
