#include <bits/stdc++.h>
using namespace std;
int n, m, x = 1;
string s, a;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m;
		cin >> a;
//		cout << a << "||";
		while (m--) {
			s[x] = a[0];
//			cout << s[x] << " ";
			x++;
		}
	}
//	cout << l << endl;
	for (int i = 1; i <= x; i++) {
		cout << s[i];
	}
	int num = 0;
	for (int i = 1; i <=  x / 2; i++) {
		if (s[i] != s[x - i]) {
			num++;
//			cout << i;
		}
	}
	cout << num;


	return 0;
}
