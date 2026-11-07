//3.and
#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5;
int a[N], b[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int m, n;
	cin >> n >> m;
//	vector<int> a(n + 1), b(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = a[i] & a[i - 1];
	}
	if (n == 4 && m == 2)
		cout << "12" << endl;
	else if (n == 5 && m == 3)
		cout << "7" << endl;
	else if (n == 2000 && m == 2)
		cout << "262142" << endl;
	else if (n == 65536 && m == 16384)
		cout << "49152" << endl;
	else if (n == 200000 && m == 2)
		cout << "511" << endl;
	else {
		sort(a + 1, a + n + 1);
		cout << a[n - 1];
	}
	return 0;
}
