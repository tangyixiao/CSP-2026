#include <bits/stdc++.h>
using namespace std;
long long n,m;
long long cards[500005];
long long ans[500005];
long long table[500005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=0;i<n;i++) cin>>cards[i];
	for(long long round=0;round<n;round++)
	{
		long long cnt=0;
		table[0]=cards[round];
		cnt++;
		for(long long i=round+1;i<n;i++)
		{
			for(long long j=0;j<cnt;j++)
			{
				if(cards[i]==table[j])
				{
					cnt=j;
				}
			}
			table[cnt]=cards[i];
			cnt++;
		}
		for(long long i=0;i<cnt;i++)
		{
			ans[table[i]]++;
		}
	}
	for(long long i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
