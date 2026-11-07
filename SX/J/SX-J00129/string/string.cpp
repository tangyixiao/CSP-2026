#include <bits/stdc++.h>
using namespace std;

struct node {
	long long num;
	char c;
} s[200005];

int n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i].num >> s[i].c;
	}
	bool f = 1;
	char ch = s[1].c;
	for (int i = 2; i <= n; i++) {
		if (s[i].c != ch) {
			f = 0;
			break;
		}
	}
	if (f) {
		cout << 0;
		return 0;
	}
	long long ans = 0;
	int j = n;
	for (int i = 1; i <= n / 2; i++) {
		if (s[i].c != s[j].c) {
			if (s[j].num != s[i].num) {
				ans += s[i].num;
				if (s[j].num < s[i].num)
					s[j + 1].num -= s[i].num - s[j].num;
				else
					s[j + 1].num += s[j].num - s[i].num;
			}
			else
				ans += min(s[i].num, s[j].num);
		}
		j--;
	}
	cout << ans;
	return 0;
}
