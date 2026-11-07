#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long a[n+5];
	int ans=-10;
	int x;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n-m;i++)
	{
		x=a[i];
		for(int j=i+1;j<=n-m;j++)
		{
			for(int k=0;k<m-1;++k)
			{
				int d=x;
				x=x&a[j+k];
				ans=max(ans,x);
				x=d;
			}
		}
		
	}
	cout<<ans;
	return 0;
}
