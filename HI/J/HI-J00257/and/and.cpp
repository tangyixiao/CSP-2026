#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	sort (a+1,a+n+1);
	if (m == 1)
	{
		cout << a[n];
	}
	if (m == 2)
	{
		while(n > 0)
		{
			cout << (a[n]%2) && (a[n-1]%2);
			a[n] /= 2;
			a[n-1] /= 2;
		}
	}
	else
	{
		int sum = 1;
		for (int i = n;i >= m;i--)
		{
			sum &= a[i];
		}
		cout << sum;
	}
	return 0;
}
