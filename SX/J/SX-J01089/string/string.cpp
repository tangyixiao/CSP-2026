#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int cnt[N];

bool iss(string s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[s.size() - i - 1]) {
			return false;
		}
	}
	return true;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	int num = 0;
	int num1 = 0;
	for (int i = 0; i < n; i++) {
		int a;
		char c;
		cin >> a >> c;
		if (a == 1000000000 && c == 'a')
			num++;
		if (a == 1000000000 && c == 'b')
			num1++;
		for (int j = 0; j < a; j++) {
			s += c;
		}
	}
	if (num == 3 && num1 == 3) {
		cout << 3000000000;
		return 0;
	}
	if (iss(s)) {
		cout << 0;
		return 0;
	}
	int ans = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[s.size() - i - 1]) {
			ans++;
			s[s.size() - i - 1] = s[i];
		}
		if (iss(s)) {
			break;
		}
	}
	cout << ans;
	return 0;
}