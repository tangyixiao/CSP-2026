#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], re[300005], po[300005], ri, le;
int pai[500005], tt[500005];

int main() {
	freopen("card.in", r, stdin);
	freopen("card.out", w, stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[n];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			re[a[j]]++;
			po[a[j]] = j;
			if (re[a[j]] == 2) {
				re[a[j]]--;
				ri = j - 1;
				le = min(po[a[j]], le);
				po[a[j]] = j;
			}
		}
		for (int j = 1; j <= n; j++) {
			if (a[j] >= ri || a[j] <= le)
				pai[j]++;
		}
		for (int j = 1; j <= n; j++) {
			if (pai[j] > 0)
				tt[j]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << tt[i] << " ";
	}
}