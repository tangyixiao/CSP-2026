#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct block
{
	char col;
	ll len;
} arr[200005];

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n, tn = 0;
	cin >> n;
	char lstcol = 'A', xcol;
	ll xlen;
	for (int i = 1; i <= n; i++)
	{
		cin >> xlen >> xcol;
		if (xcol == lstcol) arr[tn].len += xlen;
		else arr[++tn] = {xcol, xlen}, lstcol = xcol;
	}
	ll ans = 0;
	int i = 1, j = tn;
	while (i < j)
	{
		if (arr[i].col != arr[j].col)
		{
			ans += min(arr[i].len, arr[j].len);
		}
		if (arr[i].len > arr[j].len)
		{
			arr[i].len -= arr[j].len;
			arr[j].len = 0;
			j--;
		}
		else if (arr[i].len < arr[j].len)
		{
			arr[j].len -= arr[i].len;
			arr[i].len = 0;
			i++;
		}
		else
		{
			arr[i].len = arr[j].len = 0;
			i++, j--;
		}
	}
	cout << ans << "\n";
	return 0;
}
