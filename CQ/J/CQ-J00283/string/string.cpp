#include <iostream>
using namespace std;

int a[2000000 + 5];
char c[2000000 + 5];

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i] >> c[i];
	int l = 1, r = n;
	long long ans = 0;
	while (l < r)
	{
		if (c[l] != c[r])
		{
			if (a[l] != a[r]) ans += max(a[l], a[r]) - min(a[l], a[r]);
			else ans += a[l];
		}
		if (a[l] > a[r]) a[l] -= a[r], r--;
		else
		{
			a[r] -= a[l], l++;
			if (!a[r]) r--;
		}
	}
	cout << ans << endl;
	return 0;
}
