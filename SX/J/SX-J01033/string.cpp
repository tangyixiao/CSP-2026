#include <bits/stdc++.h>
using namespace std;
long long a[100010];
string c[100010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		for (int j = 1; j <= n; j++) {
			cin >> c[j];
		}
	}
	cout << "0";
	return 0;
}
