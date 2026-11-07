#include <bits/stdc++.h>
using namespace std;
long long a[200001];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	long long Max = -1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		Max = max(Max, a[i]);
	}
	if (m == 1) {
		cout << Max&&Max;
	}
	if (m == n) {
		int s = a[1];
		for (int i = 2; i <= n; i++)
			s = s && a[i];
		cout << s << endl;
	}
	return 0;
}
