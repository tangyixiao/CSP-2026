#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6;
ll n;
long long a[200001], m, k;
char c[200001];
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cin >> c[i];
		for (int j = 1; j <= a[i]; j++) {
			m++;
			s[m] = c[i];

		}
	}
	if (s.size() % 2 == 0) {
		for (int i = 1; i <= m / 2; i++) {
			if (s[i] != s[m / 2 + (m / 2 - i + 1)]) {
				k++;
			}
		}
	} else {
		for (int i = 1; i <= m / 2; i++) {
			if (s[i] != s[m / 2 + (m / 2 - i)]) {
				k++;
			}
		}
	}
	cout << k;
	return 0;
}
