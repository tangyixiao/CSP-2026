#include<bits/stdc++.h>
using namespace std;
int minnum[300001],a[500001],b[500001],n,m,cnt[300001];
void solve1()
{
	for(int k=1;k<=n;k++)
	{
		for(int i=k;i<=n;i++)
		{
			b[i]=a[i];
		}
		for(int i=1;i<=n;i++)
		{
			if(minnum[a[i]]>i)
			{
				minnum[a[i]]=i;
			}
		}
		for(int i=k;i<=n;i++)
		{
			if(i>minnum[b[i]])
			{
				if(minnum[b[i]]>=k&&b[minnum[b[i]]])
				{
					for(int j=minnum[b[i]];j<i;j++)
					{
						b[j]=0;
					}
				}
				minnum[b[i]]=i;
			}
		}
		for(int i=1;i<=n;i++)
		{
			cnt[b[i]]++;
			b[i]=0;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<cnt[i]<<" ";
	}
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(minnum[a[i]]==0)
		{
			minnum[a[i]]=i;
		}
	}
	solve1();
	return 0;
}

