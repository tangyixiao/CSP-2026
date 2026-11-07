#include <bits/stdc++.h>
using namespace std;
int n;

struct s {
	int num;
	char a;
};

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	vector<s>v(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> v[i].num >> v[i].a;
	}
	long long ans = 0;
	for (int i = 1, j = n; i < j;) {
		if (v[i].a != v[j].a) {
			if (v[i].num > v[j].num) {
				ans += v[j].num;
				v[i].num -= v[j].num;
				j--;
			} else {
				ans += v[i].num;
				v[j].num -= v[i].num;
				i++;
			}
		} else {
			if (v[j].num > v[i].num) {
				v[j].num -= v[i].num;
				i++;
			} else if (v[j].num < v[i].num) {
				v[i].num -= v[j].num;
				j--;
			} else
				i++, j--;
		}
	}
	cout << ans;
	return 0;
}
