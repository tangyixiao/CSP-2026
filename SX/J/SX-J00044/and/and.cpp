#include <bits/stdc++.h>
using namespace std;
int n, m;
long long zong, cnt = 1, a[200050];
bool flag = false;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	if (n == m) {
		flag = true;
	}
	int c;
	cin >> c;
	a[0] = c;
	zong = c;
	for (int i = 1; i < n; i++) {
		cin >> c;
		a[i] = c;
		zong = zong &c;
		cnt++;
	}
	if (flag == true) {
		cout << zong;
		return 0;
	}
	int l = 0, r = n;
	long long biggest = -10086;
	while (cnt--) {
		r = n;
		for (int j = n; j >= 0; j--) {
			biggest = max(biggest, a[l] & a[r]);
			r--;
		}
		l++;
	}
	cout << biggest;
	return 0;
}
