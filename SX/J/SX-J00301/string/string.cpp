#include <bits/stdc++.h>
using namespace std;
string a, b;
int n, x;
long long sum;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		cin >> b;
		for (int j = 0; j < x; j++) {
			a += b;
		}
	}
	b = a;
	reverse(a.begin(), a.end());
	if (a == b) {
		cout << 0;
		return 0;
	}
	int len = a.size();
	for (int i = 0; (i + 1) * 2 <= a.size(); i++) {
		if (a[i] != a[len - i - 1]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
}