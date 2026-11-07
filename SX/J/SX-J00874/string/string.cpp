#include <bits/stdc++.h>
using namespace std;
long long Ai[200005];

int main() {

	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	int n;

	char c[200005];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> Ai[i] >> c[i];

	}
	char l, r;
	long long cnt = 0;
	long long a = 1, b = n;
	while (a <= b) {
		if (Ai[a] != 0 && Ai[b] != 0) {
			l = c[a], r = c[b];
			Ai[a] = Ai[a] - 1;
			Ai[b] = Ai[b] - 1;
			if (l != r) {
				cnt++;
			}
		} else {
			a++;
			b--;
		}

	}
	cout << cnt;
	return 0;
}
