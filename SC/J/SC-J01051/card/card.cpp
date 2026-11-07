
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	ll a[100010],b[m];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[a[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			for(int k=i+1;k<=n;k++)
			{
				if(a[j]==a[k])
				{
					for(int nb=j;nb<=k;nb++)
					{
						b[a[nb]]--;
					}
				}
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
