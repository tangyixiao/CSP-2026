#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int p=1;p<=n;p++)
	{
		cin >> a[p];
	}
	sort(a+1,a+n+1);
	long long ans=a[n];
	for(int p=n-1;p>=n-m+1;p--)
	{
		ans&=a[p];
	}
	cout << ans << "\n"; 
	return 0;
}
