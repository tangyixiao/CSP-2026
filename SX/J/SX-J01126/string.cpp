#include <bits/stdc++.h>
using namespace std;
int a[30], s, sum;
long long b[200000001];
int n, m;
char x;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m >> x;
		//a[x - 'a'] = a[x - 'a'] + m;
		for (int j = s; j < s + m; j++) {
			b[j] = x;
		}
		s = s + m;
	}
	for (int i = 0; i < s / 2; i++) {
		if (b[i] != b[s - 1 - i])
			sum++;
	}
	cout << sum;
}
