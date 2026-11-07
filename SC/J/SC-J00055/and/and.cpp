#include <bits/stdc++.h>
using namespace std;

int a[200005];

void solve () {
	int n, m;
	cin >> n >> m;
	int i = 0;
	bool f = 1;
	while (i < n) {
		cin >> a[i];
		int j = 0;
		bool fff = 0;
		while (j < 21)
		{
			if (a[i] + 1 == pow (2, j))
			{
				fff = 1;
			}
			j = j + 1;
		}
		if (fff == 0)
		{
			f = 0;
		}
		i = i + 1;
	}
	if (m == 1) {
		sort (a, a + i);
		cout << a[i - 1];
		return;
	}
	if (m == n) {
		i = 0;
		int sum = a[0];
		while (i < n) {
			sum = sum & a[i];
			i = i + 1;
		}
		cout << sum;
		return;
	}
	if (m == 2) {
		i = 0;
		int maxx = -1;
		while (i < n) {
			int j = i + 1;
			while (j < n) {
				int ans = a[i] & a[j];
				if (maxx < ans)
				{
					maxx = ans;
				}
				j = j + 1;
			}
			i = i + 1;
		}
		cout << maxx;
		return;
	}
	if (m == n - 1) {
		i = 0;
		int maxx = -1;
		while (i < n) {
			int sum;
			if (i == 0) sum = a[1];
			else sum = a[0];
			int j = 0;
			while (j < n) {
				if (j != i) sum = sum & a[j];
				j = j + 1;
			}
			if (maxx < sum) maxx = sum;
			i = i + 1;
		}
		cout << maxx;
		return;
	}
	if (f == 1)
	{
		sort (a, a + i);
		cout << a[i - m];
		return;
	}
	return;
}

int main () {
	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);
	solve ();
	fclose (stdin);
	fclose (stdout);
	return 0;
}