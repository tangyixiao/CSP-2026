#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[500010],ans[500010],b[500010];
bool cnt[500010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		memset(cnt,0,sizeof(cnt));
		memset(b,0,sizeof(b));
		for(int j=i;j<=n;j++)
		{
			if(cnt[a[j]])
			{
				for(int k=b[a[j]];k<j;k++)
				{
					cnt[a[k]]=0;
				}
			}
			cnt[a[j]]=1;
			b[a[j]]=j;
		}
		for(int j=1;j<=m;j++)
		{
			if(cnt[j])
			{
				ans[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}

	return 0;
}