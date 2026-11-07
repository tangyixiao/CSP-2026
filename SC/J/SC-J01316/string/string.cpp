#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	if (n == 1) {
		cout << 0;
		return 0;
	}
	string s;
	for (int i = 0, a; i < n; i++) {
		char c;
		cin >> a >> c;
		while (a--) s += c;
	}
	int t = 1;
	for (int i = 0, j = s.size() - 1; i <= j; i++, j--) {
		if (s[i] != s[j]) {
			t = 0;
			break;
		}
	}
	if (t) {
		cout << 0;
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}