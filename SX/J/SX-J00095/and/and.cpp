#include <bits/stdc++.h>
using namespace std;
long long s[200010];

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;

	for (long long i = 0; i < n; i++) {
		cin >> s[i];
	}
	sort(s, s + n, cmp);


	long long b = 0;
	b = s[0];

	for (long long i = 1; i < m; i++) {

		b = b &s[i];

	}
	cout << b;




	return 0;
}
