#include <bits/stdc++.h>
using namespace std;
const int MAXNshu = 1e5+3, MAXNpai = 2e5+3;
int shu[MAXNshu], pai[MAXNpai], bj[MAXNpai], bjwei[MAXNshu];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int k = 1; k < n; k++) {
		int a;
		cin >> a;
		pai[k] = a;
		for (int i = k; i <= n; i++) {
			if (bj[pai[i]] == 1) {
				for (int j = bjwei[a]; j <= i; j++) {
					bj[pai[j]] = 0;
					bjwei[j] = 0;
				}
			} else {
				bj[a] = 1;
				bjwei[a] = i;
			}
		}
		for (int i = 1; i <= m; i++) {
			shu[i] += bj[i];
		}
		shu[MAXNshu] = 0, pai[MAXNpai] = 0, bj[MAXNpai] = 0, bjwei[MAXNshu] = 0;
	}
	for (int i = 1; i <= m; i++) {
		cout << shu[i] << " ";
	}
	return 0;
}