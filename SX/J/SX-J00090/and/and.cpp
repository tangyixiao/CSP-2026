#include <bits/stdc++.h>
using namespace std;

int zh(int a) {
	int z = a % 2, x = a / 2;
	string f;
	while (z == 0) {
		x = x / 2;
		z = x % 2;
	}
	return z;
}

string cz(string a, string b) {
	int len = max(a.size(), b.size()), cut;
	string q;
	for (int i = 0; i < len; i++) {
		if (a[i] == b[i]) {
			q = q + "1";
		} else {
			q = q + "0";
		}
	}
	return q;
}
const int N = 1e8+10;
int n, m, sam, a[N];
string maxx;

int main() {
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		a[i] = zh(a[i]);
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j = n - i; j++) {
			string  o = a[i], p = a[j];
			+
			if (maxx < cz(o, p)) {
				maxx = cz(o, p);
			}
		}
	}
	int j = 0, len = maxx.size();
	for (int i = 0; i < len; i++) {
		sam = sam + maxx[i] * j * 2;
		j++;
	}
	cout << j;
	return 0;
}
