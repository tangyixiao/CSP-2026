#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,m,a[N],t[N],cnt[N],d[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for (int i=1;i<=n;i++)
	{
		memset(t,0,sizeof(t));
		for (int j=i+1;j<=n;j++)
		{
			t[a[j]]++;
			cnt[a[j]]+=cnt[a[j-1]];
			if (t[a[j]]==2)cnt[a[j]]=1;
			for (int k=j;k<=n;k++)
			if (cnt[a[j]]>1)
			d[a[j]]++;
		}
	}
	for  (int i=1;i<=n;i++)
	{
		if (d[a[i]]>0)
		cout<<d[a[i]]<<" ";
	}
	return 0;
}
