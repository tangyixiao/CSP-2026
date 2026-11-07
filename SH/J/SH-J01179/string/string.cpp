#include <bits/stdc++.h>
using namespace std;
string s;
char c;
int x, flag;
long long ans;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x >> c;
		for (int i = 1; i <= x; i++) {
			s += c;
		}
	}
//	cout << s;
	int l = 0, r = s.size() - 1;
	if (s.size() % 2) {
		flag = 1;
	}
	while (1) {
		if (r <= l) {
			break;
		}
		if (s[l] != s[r]) {
			ans++;
		}
		l++, r--;
//		cout << l << " " << r << endl;'
	}
	cout << ans << endl;
	fclose(stdin);
	fclose(stdout);
    return 0;
}

