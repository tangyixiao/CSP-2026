#include <bits/stdc++.h>
using namespace std;
long long d[100005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long a, s, sum = 0;
	cin >> a >> s;
	for (int i = 0; i < a; ++i) {
		cin >> d[i];
	}
	for (int i = 0; i < a; ++i) {
		for (int j = i + 1; j < a; ++j) {
			if (sum < (d[i]&d[j])) {
				sum = d[i] & d[j];
			}
		}
	}
	cout << sum;
	return 0;
}
