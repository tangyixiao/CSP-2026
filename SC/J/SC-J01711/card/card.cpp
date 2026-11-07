#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[500005];
signed main()
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
		if(i==a[n])
		{
			cout<<n;
		}
		else if(i==a[n-1])
		{
			cout<<n-1;
		}
		else
		{
			cout<<O;
		}
	}
	return 0;
}
