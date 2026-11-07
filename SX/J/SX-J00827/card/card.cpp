#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int n, m, a[N], b[N], k;
map<int, int>mp;
bool q = 1;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] < a[i - 1])
			q = 0;
	}
	if (q) {
		for (int i = 1; i <= n; i++) {
			k = 0;
			for (int j = i; j <= n; j++) {
				if (b[k] == a[j]) {
					b[k] = 0;
					k--;
				}
				k++;
				b[k] = a[j];
			}
			for (int j = 1; j <= k; j++) {
				//cout << b[j] << " ";
				mp[b[j]]++;
			}
			//cout << endl;
		}
		for (int i = 1; i <= m; i++) {
			cout << mp[i] << " ";
		}
		return 0;
	}

	for (int i = 1; i <= n; i++) {
		k = 0;
		for (int j = i; j <= n; j++) {
			int y = 0, h = 0;
			for (int t = 1; t <= k; t++) {
				if (b[t] == a[j]) {
					y = 1;
				}
				if (y == 1) {
					b[t] = 0;
					h++;
				}
			}
			k -= h;
			k++;
			b[k] = a[j];
		}
		for (int j = 1; j <= k; j++) {
			//cout << b[j] << " ";
			mp[b[j]]++;
		}
		//cout << endl;
	}
	for (int i = 1; i <= m; i++) {
		cout << mp[i] << " ";
	}
	return 0;
}
