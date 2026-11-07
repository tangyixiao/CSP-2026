#include <bits/stdc++.h>
using namespace std;
int n, m;

long long y[1000000], jiesuan[1000000] = {};
long long pd[1000000] = {};

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> y[i];
	}
	for (int i = 1; i <= n; i++) {
		stack<int> a;
		memset(pd, 0, sizeof(pd));
		for (int j = i; j <= n; j++) {
			if (pd[y[j]] == 0) {
				a.push(y[j]);
				pd[y[j]] = 1;
			} else {
				while (a.top() != y[j]) {
					pd[a.top()] = 0;
					a.pop();
				}
			}
		}
		while (!a.empty()) {
			jiesuan[a.top()]++;
			a.pop();
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << jiesuan[i] << " ";
	}
	return 0;
}