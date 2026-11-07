#include <bits/stdc++.h>
using namespace std;
long long n, m;
int by[500010];
int a[500010];
int z[500010];
int sy[300010];
long long p = 0;
bool fin = 0;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		by[i] = a[i];
	}
	for (int i = 1; i <= n; i++) { //局数循环
		for (int j = 1; j <= n; j++) {
			a[i] = by[i];
		}
		p = 0;
		for (int j = i; j <= n; j++) { //出牌循环
			for (int k = 1; k <= p; k++) { //查找循环
				if (z[k] == a[j]) {
					p = k;
					fin = 1;
				}
			}
			if (fin == 0) {
				p++;
				z[p] = a[j];
			} else {
				fin = 0;
			}
		}
		for (int j = 1; j <= p; j++) { //剩余牌统计
			sy[z[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << sy[i] << ' ';
	}
	return 0;
}
