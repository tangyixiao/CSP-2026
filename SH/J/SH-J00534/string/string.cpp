#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

long long a[200010];
char c[200010];

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long sum = 0, ans = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
	}
	int l = 1, r = n;
	while(l < r)
	{
		if(a[l] == a[r])
		{
			if(c[l] != c[r])
				ans += a[l];
			l++;
			r--;
		}
		else if(a[l] < a[r])
		{
			a[r] -= a[l];
			if(c[l] != c[r])
				ans += a[l];
			l++;
		}
		else
		{
			a[l] -= a[r];
			if(c[l] != c[r])
				ans += a[r];
			r--;
		}
	}
	cout << ans << endl;
	return 0;
}
