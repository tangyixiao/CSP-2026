#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], A[200005][35], B[200005], c = 1, cnt[200005], mx, ans = 0;

void re(int aa) {
	int cnt = 1, b[35], Cnt = 1, aaa = aa;
	while (aaa) {
		b[cnt++] = aaa % 2;
		aaa /= 2;
	}
	cnt--;
	for (int i = cnt; i >= 1; i--) {
		A[c][i] = b[i];
//		cout << A[aa][Cnt];
		Cnt++;
	}
	B[c] = cnt;
	mx = max(mx, B[c]);
//	cout << "\n";
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n; i++) {
		re(a[i]);
		c++;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= B[i]; j++) {
			cout << A[i][j];
		}
		cout << "\n";
	}
	for (int i = 1; i <= mx; i++) {
		cnt[i] = 0;
		for (int j = 1; j <= n; j++) {
			if (A[i][j] == 1 && a[i] != -1) {
				cnt[i]++;
			}
		}
		if (cnt[i] < m) {
			cnt[i] = 0;
		} else {
			cnt[i] = 1;
		}
	}
	for (int i = 1; i <= mx; i++) {
		cout << cnt[i];
		int bb = cnt[i];
		for (int j = 1; j <= mx - i ; j++) {
			bb *= 2;
		}
		ans += bb;
	}
	cout << "\n" << ans;
	return 0;
}/*
5 3
31 3 1 15 7
4 2
3 15 12 12
*/
