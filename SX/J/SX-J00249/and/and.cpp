#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define st string
ll n, m, a[1000105], sum, num;

bool f() {
	for (int i = 1; i <= n; i++)
		if (a[i] % 2 == 0)
			return 0;
	return 1;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	if (f())
		cout << a[n - m + 1];
	else {
		for (int i = n; i >= 1; i--) {
			if (i == n)
				sum = a[i];
			else
				sum &= a[i];
			num++;
			if (num == m)
				break;
		}
		cout << sum;
	}
	return 0;
}
