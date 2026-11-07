#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	long long n, b, cnt = 0;
	char w;
	cin >> n;
	string a;
	for (int i = 1; i <= n; i++) {
		cin >> b >> w;
		for (int j = 1; j <= b; j++) {
			a += w;
		}
	}

	for (int i = 0; i < (a.size() / 2); i++) {
		if (a[i] != a[a.size() - i - 1]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
