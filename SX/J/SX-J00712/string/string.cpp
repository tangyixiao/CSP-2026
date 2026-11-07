#include <bits/stdc++.h>
using namespace std;
long long a[200000];
char b[200000];
string w, z;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, q;
	long long s = 0;
	cin >> n;
	int t = n;
	long long e = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		z[i] = b[i];
	}
	for (int i = 0; i < n; i++) {
		if (e > 100000000 || a[i] > 100000000) {
			if (t % 2 != 0) {
				q = (t + 1) / 2;
				for (int j = q; j >= 0; i--) {
					int p = 0;
					if (z[j] != z[q  + p])
						s += a[j];
					p++;
				}
			} else {
				q = t / 2;
				for (int j = q ; j >= 0; j--) {
					int p = 0;
					if (z[j] != z[q  + p])
						s += a[j];
					p++;
				}
			}
			cout << s;
			return 0;
		}
		for (int j = e; j < a[i]; j++) {
			w[j] = b[i];
		}
		e +=  a[i] ;
	}
	if (e % 2 != 0) {
		q = (e + 1) / 2;
		for (int i = q ; i >= 0; i--) {
			int p = 0;
			if (w[i] != w[q  + p ])
				s++;
			p++;
		}
	} else {
		q = e / 2;
		for (int i = q ; i >= 0; i--) {
			int p = 0;
			if (w[i] != w[q  + p])
				s++;
			p++;
		}
	}
	cout << s;
	return 0;
}

