#include<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	string s;
}a[200010], b[200010];
int n;
string t;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	long long len = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].x >> a[i].s;
		len += a[i].x;
		for (int j = 1; j <= a[i].x; j++) {
			t += a[i].s;
		}
	}
	t = " " + t;
//	cout << t << "\n";
	if (len % 2 == 0) {
		int cnt1 = 0, cnt2 = 0;
		for (int i = 1; i <= len / 2; i++) {
			if (t[i] != t[len - i + 1]) {
				cnt1++;
			}
		}
		for (int i = len / 2 + 1; i <= len; i++) {
			if (t[i] != t[len - i + 1]) {
				cnt2++;
			}
		}
		cout << min(cnt1, cnt2);
	} else {
		int cnt1 = 0, cnt2 = 0;
		//aaaaa
		for (int i = 1; i <= len / 2; i++) {
			if (t[i] != t[len - i + 1]) {
				cnt1++;
			}
		}
		for (int i = len / 2 + 2; i <= len; i++) {
			if (t[i] != t[len - i + 1]) {
				cnt2++;
			}
		}
		cout << min(cnt1, cnt2);
	}
	return 0;
}
//frepoen
//fropen
//frepen
//froepen
