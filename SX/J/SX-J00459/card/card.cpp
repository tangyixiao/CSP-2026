#include <bits/stdc++.h>
using namespace std;
int n, m, q[500005], w[500005], o[500005], e, ans, y;

//int r() {
//	for (int i = 1; i <= n; i++) {
//		if (q[i] != 0)
//			return q[i];
//	}
//	return 0;
//}

int t(int x) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (o[i] == x) {
			//cout << "ab" << endl;
			sum++;
		}
	}
	return sum;
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> q[i];
	}

	while (e < n) {
		for (int i = 1; i <= n; i++) {
			o[i] = q[i];
		}
		for (int i = 1; i <= m; i++) {
			for (int j = e; j <= n; j++) {
				//	cout << "QWE" << endl;
				for (int l = j + 1; l <= n; l++) {
					if (j == l && j != 0 && l != 0) {
						//cout << "qwe" << endl;
						for (int k = j; k < l; k++) {
							o[k] = 0;
							//cout << "QWERTYUIOP" << endl;
						}
					}
				}

			}
		}
		//	if (r() == 1) {
		for (int i = 1; i <= n; i++) {
			if (o[i])
				w[y++] = o[i];
		}
		//	}
		e++;
	}
	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= n; j++) {
//			cout << w[i] << endl;
//		}
		ans = t(i);
//			if (w[j] == i) {
//				ans++;
//				//cout << "QQQQQQQQQQQQQQQQ" << endl;
//			}
		//	cout << "QQQQQQQQQQQQQQQQ" << endl;
		//}
		cout << ans << " ";
		ans = 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}