#include <bits/stdc++.h>
using namespace std;
const int Q = 5e5+5;
long long n, q, a[Q], s, m, qqq;
bool h = 1;

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (a[i] < a[i - 1])
		{
			h = 0;
		}
	}
	if (h)
	{
		for (long long i = 1; i <= n; i++)
		{
			qqq += a[i];
			cout << qqq << " ";
		}
		return 0;
	}
	return 0;
}
