#include<bits/stdc++.h>
using namespace std;
int n, a[200005];
long long ans;
char c[200005];
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i = 1 ; i <= n; ++i)
	{
		cin >> a[i] >> c[i];
	}
	for(int i = 1, j = n; i < j;)
	{
		if(a[i] > a[j])
		{
			ans += a[j] * (c[i] != c[j]);
			a[i] -= a[j--];
		}
		else if(a[i] == a[j])
		{
			ans += a[i] * (c[i] != c[j]);
			++i, --j;
		}
		else
		{
			ans += a[i] * (c[i] != c[j]);
			a[j] -= a[i++];
		}
	}
	cout << ans;
	return 0;
} 
