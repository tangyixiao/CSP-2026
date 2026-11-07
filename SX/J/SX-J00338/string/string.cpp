#include <bits/stdc++.h>
using namespace std;
long long n, m[200005], sum, num;
char s[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> m[i] >> s[i];
	}
	for (long long i = 1; i <= n; i++) {
		if (s[i] != s[n]) {
			sum += min(m[n], m[i]);
		}
		if (m[n] > m[i]) {
			m[n] -= m[i];
			n++;
		}
		if (m[n] < m[i]) {
			m[i] -= m[n];
			i--;
		}
		n--;
	}
	cout << sum;
}
