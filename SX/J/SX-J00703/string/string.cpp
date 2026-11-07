#include <bits/stdc++.h>
using namespace std;
int n;

struct p {
	int num;
	char word;
};
p a[200010], b[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].num >> a[i].word;
		b[i].num = a[i].num;
		b[i].word = a[i].word;
	}
	int l = 1, r = n, sum = 0;
	while (l < r) {
		if (a[l].word != a[r].word) {
			if (a[l].num < a[r].num) {
				a[r].num -= a[l].num;
				sum += a[l].num;
				l++;
			} else if (a[l].num == a[r].num) {
				a[r].num -= a[l].num;
				sum += a[l].num;
				l++;
				r--;
			} else {
				a[l].num -= a[r].num;
				sum += a[r].num;
				r--;
			}
		} else {
			if (a[l].num < a[r].num) {
				a[r].num -= a[l].num;
				l++;
			} else if (a[l].num == a[r].num) {
				a[r].num -= a[l].num;
				l++;
				r--;
			} else {
				a[l].num -= a[r].num;
				r--;
			}
		}
	}
	cout << sum;
}