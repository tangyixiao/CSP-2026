#include <bits/stdc++.h>
using namespace std;

struct str {
	int num;
	char cha;
} t[1001 * 1001];


int main() {
	long long n, a, sum = 0;
	char c;
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> c;
		t[i].num = a;
		t[i].cha = c;
	}
	int x = 0, y = n - 1;
	while (x < y) {
		if (t[x].cha != t[y].cha) {
			if (t[x].num > t[y].num) {
				t[x].num -= t[y].num;
				sum += t[y].num;
				y--;
			} else if (t[x].num == t[y].num) {
				sum += t[y].num;
				x++;
				y--;
			} else {
				t[y].num -= t[x].num;
				sum += t[x].num;
				x++;
			}
		} else {
			if (t[x].num > t[y].num) {
				t[x].num -= t[y].num;
				y--;
			} else if (t[x].num == t[y].num) {
				x++;
				y--;
			} else {
				t[y].num -= t[x].num;
				x++;
			}
		}
	}
	cout << sum << endl;
	return 0;
}