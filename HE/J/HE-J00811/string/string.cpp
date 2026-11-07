#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 7;
int n;
ll a[N];
char c[N];
ll sum[N];
ll ans;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
		sum[i] = sum[i - 1] + a[i];
	}
//	cout << endl; // test
	for (int i = 1, j = n; i <= n;)
	{
		// sum[i - 1] + 1 ~ sum[i];
		// sum[n] - sum[i] + 1 ~ sum[n] - sum[i - 1]
		// sum[j - 1] + 1 ~ sum[j]
		ll nl = sum[j - 1] + 1;
		ll nr = sum[j];
		ll tl = sum[n] - sum[i] + 1;
		ll tr = sum[n] - sum[i - 1];
		ll addl = sum[n] - sum[i] - sum[j - 1]; // sum[n] - sum[i] + 1 - (sum[j - 1] + 1) = sum[n] - sum[i] - sum[j - 1]
		ll addr = sum[j] - sum[n] + sum[i - 1]; // sum[j] - (sum[n] - sum[i - 1]) = sum[j] - sum[n] + sum[i - 1]
		if (c[i] != c[j])
		{
			ans += a[j];
//			cout << nl << " " << nr << " " << endl << tl << " " << tr << endl; // test
			if (nl < tl) // left limit
			{
//				cout << "left " << addl + a[j] << endl; // test
				ans -= addl;
			}
			if (tr < nr) // right limit
			{
//				cout << "right " << addr + a[j] << endl; // test
				ans -= addr;
			}
//			if (tl <= nl && nr <= tr) // test
//			{
//				cout << "normal " << a[j] << endl;
//			}
		}
		if (nr <= tr)
		{
			j--;
		}
		if (nl <= tl)
		{
			if (sum[i] >= sum[n] / 2) // break
			{
				break;
			}
			i++;
		}
	}
	cout << ans;
	return 0;
}

