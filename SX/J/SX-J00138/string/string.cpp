#include <bits/stdc++.h>
using namespace std;
long long a;
string s;
string v, u;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	if (n == 1) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		cin >>a >> s;
		for (int j = 1; j <= a; j++)
			v += s;
	}
	for (int i = v.size() - 1; i >= 1; i--) {
		u += v[i];
	}
	long long o = 0;
	for (int i = 1; i < v.size(); i++)
		if (u[i] != v[i])
			o++;
	cout << o - 1;
	return 0;
}
