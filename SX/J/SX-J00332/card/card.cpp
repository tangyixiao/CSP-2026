#include <bits/stdc++.h>
using namespace std;
int h[200000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	vector<int>a;
	int n, m;
	cin >> n >> m;
	a.push_back(0);
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}
	for (int i = 1; i <= n; i++) {
		set<int>b;
		for (int j = i; j <= n; j++) {
			b.insert(a[j]);
		}
		for (int m : b) {
			h[m]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << h[i] << " ";
	}
}
