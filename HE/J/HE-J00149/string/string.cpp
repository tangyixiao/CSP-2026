#include <bits/stdc++.h>
using namespace std;
long long n;
long long x[200009], ans;
char a[200009];
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x[i] >> a[i]; 
	}
	long long l = 1, r = n;
	while(n > 0)
	{
		if (l >= r)
		{
			break;
		}
		if (a[l] != a[r])
		{
			long long h = min(x[l],x[r]);
			x[l] -= h;
			x[r] -= h;
			ans += h;
			if (x[l] == 0)
			{
				n--;
				l++;
			}
			if (x[r] == 0)
			{
				n--;
				r--;
			}
		}
	}
	cout << ans;
	return 0;
}
