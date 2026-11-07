#include <bits/stdc++.h> 
using namespace std;
int coldfr, a[200005];
int scr_cir_cansee, treewords = -1, p[33], f[200005], fl = 1;

void dfs(int sum, int dp, int k, int a[]) {
	if (dp > coldfr) {
		if (k == scr_cir_cansee) {
			treewords = max(treewords, sum);
		} return;
	} dfs(sum & a[dp], dp + 1, k + 1, a);
	dfs(sum, dp + 1, k, a);
}

int main () {
	cin >> coldfr >> scr_cir_cansee; 
	p[0] = 1;
	for (int i = 1; i <= 30; i++) {
		p[i] = 2 * p[i - 1];
	} for (int i = 1; i <= coldfr; i++) {
		cin >> a[i];
		for (int j = 1; j <= 30; j++) {
			if (p[j] - 1 == a[i]) {
				treewords = max(treewords, j);
				f[i] = 1;
			}
		}
	} for (int i = 1; i <= coldfr; i++) {
		if (!f[i]) {
			fl = 0;
		}
	}
	if (fl) {
		cout << pow(2, treewords) - 1;
		return 0;
	} dfs(1, 1, 0, a);
	cout << treewords;
	return 0;
}
