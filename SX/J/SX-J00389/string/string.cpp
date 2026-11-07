#include <bits/stdc++.h>
using namespace std;
int w, p;

struct {
	int m;
	char n;
} e[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> w;
	for (int i = 1; i <= w; i++) {
		cin >> e[i].m;
		cin >> e[i].n;
		if (e[i].n == e[i - 1].n)
			p++;
		if (p == w - 1) {
			cout << 0;
			return 0;
		}
	}

	return 0;
}
