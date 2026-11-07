#include <bits/stdc++.h>
using namespace std;
int key[200005];

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		key[i] = a;
	}
	sort(key + 1, key + n + 1, cmp);
	int answer = key[1];
	for (int i = 2; i <= m; i++) {
		answer &= key[i];
	}
	cout << answer;
	return 0;
}