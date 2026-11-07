#include <bits/stdc++.h>
using namespace std;
string b[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(1);
	cin.tie(0);
	int n, a;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b[i];
	}
	bool flag = 1;
	string sum;
	for (int i = 1; i <= n; i++) {
		if (i == 1) {
			sum = b[i];
			continue;
		}
		if (b[i] != sum) {
			flag = 0;
		}
	}
	if (flag) {
		cout << 0;
	}
	return 0;
}
//aabbc
//cbbaa
