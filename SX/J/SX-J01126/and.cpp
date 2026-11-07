#include <bits/stdc++.h>
using namespace std;
int n, m, a[100001], b[100001], s;

int main() {
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		cin >> a[i];
		b[a[i]]++;
	}
	s = n;
	for (int i = 10000; i >= 0; i--) {
		s = s - b[a[i]];
		if (s <= 0) {
			cout << i;
			return;
		}
	}
}