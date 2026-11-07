#include <bits/stdc++.h>
using namespace std;
const int N = 2e5;

struct node {
	long long a;
	char ch;
} a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string s;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	long long cnt = 0;
	r = n, l = 1;
	while (r >= l) {
		if (a[r].ch != a[l].ch) {
			if (a[l].a < a[r].a) {
				cnt += a[l].a;
				a[r].a -= a[l].a;
				l++;
			} else if (a[l].a == a[r].a) {
				cnt += a[l].a;
				l++;
				r--;
			} else {
				cnt += a[r].a;
				a[l].a -= a[r].a;
				r--;
			}
		} else if (r == n / 2 || l == n / 2) {
			break;
		}
		cout << cnt << '\n';
	}


	return 0;
}