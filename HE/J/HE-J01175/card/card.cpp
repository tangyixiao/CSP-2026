#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5*5;
int n,m,cnt[N+10],a[N+10];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	while(n--)
	{
		int k=1;
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<i; j++)
			{
				if(a[j]==a[i])
				{
					a[j]=a[j+1]=0;
				}
			}
		}
		for(int i=1; i<=n; i++)
		{
			if(k==a[i]) cnt[i]++;
		}
	}
	for(int i=1; i<=m; i++) cout<<cnt[i]<<" ";
	return 0;
}
