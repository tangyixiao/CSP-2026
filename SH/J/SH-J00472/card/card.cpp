#include <cstdio>
#include <iostream>

using namespace std;

int cards[500005], desk[500005], ans[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i){
		cin >> cards[i];
	}
	for (int i = 1; i <= n; ++i) {
		int cur = 1;
		for (int j = i; j <= n; ++j) {
			int s = cards[j];
			for (int k = 1; k < cur; ++k){
				if (desk[k] == s) {
					cur = k;
					break;
				}
			}
			desk[cur] = s;
			cur++;
		}
		for (int o = 1; o < cur; ++o) {
			ans[desk[o]]++;
		}
	}
	for (int i = 1; i <= m; ++ i) {
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
