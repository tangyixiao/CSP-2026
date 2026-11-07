#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 200010;

ll a[N];
char c[N];
int n;

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin.tie(0)->sync_with_stdio(false);
	
	cin >> n;
	
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i] >> c[i];
	}
	
	ll ans = 0;
	
	int l = 1, r = n;
	
	while (l < r)
	{
		if (a[l] == 0) ++l;
		if (a[r] == 0) --r;
		if (a[l] >= a[r])
		{
			a[l] -= a[r];
			if (c[l] != c[r])
				ans += a[r];
			a[r] = 0; 
		}
		else
		{
			a[r] -= a[l];
			if (c[l] != c[r])
				ans += a[l];
			a[l] = 0;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}
 
