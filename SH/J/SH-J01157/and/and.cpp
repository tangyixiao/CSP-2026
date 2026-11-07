#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	if(m == 1)
	{
		ans=a[n];
	}
	else
	{
		ans=a[n];
		for(int i=n-1;i>=n-m+1;i--)
		{
			ans=ans&a[i];
		}
	}
	cout << ans;
	return 0;
}
