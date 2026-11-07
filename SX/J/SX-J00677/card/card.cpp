#include <bits/stdc++.h>
using namespace std;
int n, m, a[1010];
vector<int>v;
vector<int>v1;
int ab[10010];
vector<int>xy;

void dp(int x, int y) {
	if (x < y) {
		for (long long i = 0; i < v.size(); i++) {
			ab[v[i]]++;
		}
	}
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == a[x]) {
			for (int j = 0; j < i; j++)
				v1.push_back(v[i]);
			v = v1;
			v1.clear();
		}
	}
	v.push_back(a[x]);
	dp(x - 1, y);
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		int f = 1;
		for (int l = 0; l < xy.size(); l++) {
			if (xy[i] == a[i])
				f = 0;
		}
		if (f == 1)
			xy.push_back(a[i]);
	}
	for (int l = 1; l <= n; l++) {
		dp(n, l);
	}
	for (int l = 0; l < xy.size(); l++) {
		cout << ab[xy[l]];

	}
	return 0;
}