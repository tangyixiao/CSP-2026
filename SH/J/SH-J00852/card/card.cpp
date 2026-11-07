#include <bits/stdc++.h>
using namespace std;
int n,m,cnt[300005],a[500005],id[300005],top,st[500005];
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for (int i=n;i>=1;i--)
	{
		top=0;
		for (int j=i;j<=n;j++)
		{
			st[++top]=a[j];
			if (id[a[j]]==0)
			{
				id[a[j]]=j;
			}
			else
			{
				j=id[a[j]];
			}
		}
		for (int j=1;j<=top;j++)
		{
			cnt[st[j]]++;
		}
	}
	for (int i=1;i<=m;i++)
	{
		cout<<cnt[i]<<" ";
	}
	return 0;
}
