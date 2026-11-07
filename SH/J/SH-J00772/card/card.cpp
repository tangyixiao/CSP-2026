#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		int now[500005]={0};
		for(int j=i;j<=n;j++)
		{
			now[j]=a[j];
			for(int k=j-1;k>=1;k--)
			{
				if(now[k]==now[j])
				{
					for(int l=k;l>=1;l--)
					{
						now[l]=0;
					}
					break;
				}
			}
		}
		for(int j=i;j<=n;j++)
		{
			if(now[j]) 
			{
				ans[now[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
