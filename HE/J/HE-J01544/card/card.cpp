#include<bits/stdc++.h>
using namespace std;
long long ans[15000000],a[500005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;i++)
	{
		long long ans;
		for(int j=0;j<n;j++)
		{
			for(int k=j;k<n;k++)
			{
				if(a[k]==m)ans++;
			}
		}
		cout<<ans<<" ";
	}
	return 0;
}
