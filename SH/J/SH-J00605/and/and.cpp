#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
int a[N];
int b[N];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int maxx = -1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] > maxx) {
			maxx = a[i];
		}
	}
	int tmp = 1;
	while(maxx != 0) {
		maxx = maxx >> 1;
		tmp = tmp << 1;
	}
	int x = 0;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) {
			if((tmp & a[i]) == tmp) {
				b[x] = a[i];
				x++;
			}
		}
		if(x >= m) {
			break;
		}
		x = 0;
		tmp = tmp >> 1;
	}
	int ans = b[0];
	for (int i = 1; i < m; i++) {
		ans = ans & b[i];
	}
	cout << ans;
	return 0;
}

