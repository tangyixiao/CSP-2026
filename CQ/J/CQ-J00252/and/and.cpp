#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int long long n,m,a[200005];
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	sort(a,a+n+1);
	int long long c=a[n];
	for(int i = n;i >= n-m+1;i--)
	{
		c=c&a[i];
	}
	cout << c;
	return 0;
}
