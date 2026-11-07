#include <bits/stdc++.h>
using namespace std;
int n, m;
bool b[200005][35];
int sum[35];
long long a[100005];
bool ans[35];
long long ct = 0;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n; i++) {
		long long t = a[i];
		int p = 0;
		while (t && ++p) {
			b[i][30 - p + 1] = t % 2;
			sum[30 - p + 1] += b[i][30 - p + 1];
			t >>= 1;
		}
	}
//	for (int i = 1; i <= 30; i++) {
//		cout << sum[i] << " ";
//	}
//	cout << endl;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= 30; j++) {
//			cout << b[i][j] << "¡¡";
//		}
//		cout << endl;
//	}
	for (int i = 1; i <= 30; i++) {
		if (sum[i] < m)
			continue;
		//cout << i << endl;
		ans[i] = 1;
		int st = 0;
		for (int j = n; j > 0; j--) {
			if (b[j][i] == 1) {
				st = j;
				//cout << "st:" << st << endl;
				break;
			}
		}
		for (int j = st; j >  st - m   ; j--) {
			ans[i] = ans[i] && b[j][i];
			if (ans[i] == 0)
				break;
		}
	}
	long long x = 1;
	for (int i = 30; i > 0; i--) {
		//cout << ans[i] << " ";
		if (ans[i] == 1)
			ct += x;
		x *= 2;
	}
	//cout << endl;
	cout << ct;
	return 0;
}