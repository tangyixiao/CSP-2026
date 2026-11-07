#include <bits/stdc++.h>
using namespace std;
long long a, b, c[200005], d, e, j[200005], o[200005];
long long js, o1, jm, om, jo;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> a >> b;
	for (int i = 1; i <= a; i++) {
		cin >> c[i];
	}
	if (a == b) {
		d = c[1];
		for (int i = 2; i <= a; i++) {
			d = d &c[i];
		}
		e = max(e, d);
	}
	//
	else {
		for (int i = 1; i <= a; i++) {
			if (c[i] % 2 == 0) {
				o[o1 + 1] = c[i];
				o1++;
			} else {
				j[js + 1] = c[i];
				js++;
			}
		}
		sort(j + 1, j + 1 + js);
		sort(o + 1, o + 1 + o1);
		//
		if (js >= b) {
			d = j[js];
			for (int i = js - 1; i > js - b; i--) {
				d = d &j[i];
			}
			e = max(e, d);
		}
		//
		if (o1 >= b) {
			d = o[o1];
			for (int i = o1 - 1; i > o1 - b; i--) {
				d = d &o[i];
			}
			e = max(e, d);
		}
		//
		sort(c + 1, c + 1 + a);
		d = c[a];
		for (int i = a; i > a - b; i--) {
			d = d &c[i];
		}
		e = max(e, d);
	}
	cout << e;
	return 0;
}