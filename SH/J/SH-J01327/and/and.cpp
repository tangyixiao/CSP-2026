#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int ans=-1;
	for (int i=1;i<=n-m+1;i++)
	{
		int ans2=a[i];
		for (int j=i+1;j<=i+m-1;j++)
		{
			ans2&=a[j];
		}
		ans=max(ans,ans2);
	}
	cout<<ans;
	return 0;
}
