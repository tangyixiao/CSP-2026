#include <bits/stdc++.h>
using namespace std;
int n, m, number[200001], maxx, maxnumber, ManDeErChaoSuanUnit;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> number[i];
	}
	sort(number + 1, number + 1 + n);
	m -= 1;
	for (int i = 1; i <= n; i++) {
		int mincha, maxcha;
		if (i - m > 0) {
			maxcha = number[i] - number[i - m];
		}
		if (i + m < n) {
			mincha = number[i + m] - number[i];
		}
		if (maxcha < mincha) {
			maxx = max(maxx, maxcha);
			maxnumber = i;
		} else {
			maxx = max(maxx, mincha);
			maxnumber = i + m;
		}
	}
	ManDeErChaoSuanUnit = number[maxnumber - m];
	for (int i = m - 1; i >= 0; i--) {
		ManDeErChaoSuanUnit &= number[maxnumber - i];
	}
	cout << ManDeErChaoSuanUnit;

	return 0;
}
