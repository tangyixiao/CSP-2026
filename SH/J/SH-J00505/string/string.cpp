#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 2e5 + 5;
int n, a[N];
char c[N];
ll ans;

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
	}
	for (int i = 1, j = n; i < j; )
	{
		if (c[i] != c[j]) ans += min(a[i], a[j]);
		if (a[i] == a[j])
		{
			i++;
			j--;
		}
		else if (a[i] < a[j])
		{
			a[j] -= a[i];
			i++;
		}
		else
		{
			a[i] -= a[j];
			j--;
		}
	}
	cout << ans << "\n";
	return 0;
}

