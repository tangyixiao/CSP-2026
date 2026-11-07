#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool ishuiwen(string s) {
	string tmp = s;
	reverse(s.begin(), s.end());
	if (s == tmp)
		return true;
	return false;
}

int counter(string s1, string s2) {
	int cnt = 0;
	reverse(s2.begin(), s2.end());
	for (size_t i = 0; i < s2.length(); i++) {
		if (s1[i] != s2[i])
			cnt++;
	}
	return cnt;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string s = "";
	for (int i = 1; i <= n; i++) {
		int m;
		char c;
		cin >> m >> c;
		for (int j = 1; j <= m; j++) {
			s += c;
		}
	}
	if (ishuiwen(s)) {
		cout << 0;
		return 0;
	}
	if (s.length() % 2 == 1) {
		int mididx = s.length() / 2;
		string sub1 = s.substr(0, mididx);
		string sub2 = s.substr(mididx + 1, mididx);
		cout << counter(sub1, sub2);
		return 0;
	}
	if (s.length() % 2 == 0) {
		int mididx = s.length() / 2;
		string sub1 = s.substr(0, mididx);
		string sub2 = s.substr(mididx, mididx);
		cout << counter(sub1, sub2);
		return 0;
	}
	return 0;
}
