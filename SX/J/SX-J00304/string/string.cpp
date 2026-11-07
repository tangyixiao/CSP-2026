#include <bits/stdc++.h>
using namespace std;
string s;

bool hw(string n) {
	string t = "";
	for (int i = n.length() - 1; i >= 0; i--) {
		t += n[i];
	}
	if (n == t) {
		return true;
	} else {
		return false;
	}
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long a;
	char b;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		for (int j = 1; j <= a; j++) {
			s += b;
		}
	}
	if (hw(s)) {
		cout << 0;
	} else {
		cout << 2;
	}
	return 0;
}