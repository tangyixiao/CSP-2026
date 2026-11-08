#include <bits/stdc++.h>
using namespace std;

long long n, a[514514], ans;
char c[514514];

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		scanf("%lld %c", &a[i], &c[i]);
	}
	long long l = 1, r = n;
	while(l < r)
	{
		if(c[l] == c[r])
		{
			long long x = min(a[l], a[r]);
			a[l] -= x;
			a[r] -= x;
			if(a[l] == 0)
			{
				l++;
			}
			if(a[r] == 0)
			{
				r--;
			}
		}
		else
		{
			long long x = min(a[l], a[r]);
			ans += x;
			a[l] -= x;
			a[r] -= x;
			if(a[l] == 0)
			{
				l++;
			}
			if(a[r] == 0)
			{
				r--;
			}
		}
	}
	cout << ans;
	return 0;
}
//114514
