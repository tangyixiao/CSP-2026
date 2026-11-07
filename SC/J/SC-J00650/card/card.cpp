#include<bits/stdc++.h>
using namespace std;
long n,m;
long a[500005];
int ans[300005];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		int num=i;
		for(int j=i;j<=n;j++)
		{
			for(int k=i;k<j;k++)
			{
				if(a[j]==a[k])
				{
					num=j;
				}
			}
		}
		for(int j=num;j<=n;j++)
		{
			ans[a[j]]++;
		}
	}
	for(int j=1;j<=m;j++)
	{
		cout<<ans[j];
		if(j!=m)
		{
			cout<<' ';
		}
	}
    return 0;
}
