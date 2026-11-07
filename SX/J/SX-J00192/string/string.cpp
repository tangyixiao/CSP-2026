#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	char t[10010];
	int a;
	cin >> a;
	if (a == 1) {
		int n;
		char m;
		cin >> n >> m;
		cout << 0;
		return 0;
	}

	int p = 0, l = 0;
	while (a--) {
		long long n;
		char m;
		cin >> n >> m;
		l = l + n;
		for (long long j = 0; j < n; j++) {
			t[p] = m;
			p++;

		}

	}

	int h = 0;
	for (int i = 0; i < l / 2 - 1; i++) {
		for (int j = l / 2 + 1; j >= 0; j--) {
			if (t[i] != t[j] )
				h++;
		}
	}
	cout << h ;
}
