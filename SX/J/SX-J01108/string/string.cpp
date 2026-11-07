#include <bits/stdc++.h>
using namespace std;
const long long p = 1e9+5;
int n, a, j, r = 1, t, sum, cnt;
char c, l[p];
bool flag;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		sum += a;
		while (a != 0) {
			j++;
			a--;
			l[j] = c;
		}
	}
	t = sum;
	while (r < t) {
		if (l[r] == l[t])
			flag = 0;
		else {
			flag = 1;
			break;
		}
		r++;
		t--;
	}
	if (flag == 0) {
		cout << "0";
		return 0;
	}
	r = 1;
	t = sum;
	while (r < t) {
		if (l[r] != l[t]) {
			l[t] = l[r];
			cnt++;
		}
		r++;
		t--;
	}
	cout << cnt;

	return 0;
}