#include <bits/stdc++.h>
//AKCSP
using namespace std;
int n;

string s = "";/*
3
2 a
2 b
1 c
*/
bool _ifstring(string a) {
	string b = a;
	reverse(b.begin(), b.end());
	return (a == b ? 1 : 0);
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		char c;
		cin >> x >> c;
		for (int j = 1; j <= x; j++) {
			s += c;
		}
	}
	if (_ifstring(s)) {
		cout << 0 << endl;
		return 0;
	}
	if (s.size() % 2 == 0) {

	}
	string left = "", right = "";
	long long ians = 0;
	for (int i = 0; i < (int)(s.size() + 1) / 2 - 1; i++)
		left += s[i];
	for (int i = (int)(s.size() + 1) / 2 + 1; i < s.size(); i++)
		right += s[i];
	//cout << 0 << "~" << (s.size() + 1) / 2 - 1 << " " << (s.size() + 1) / 2 + 1 << "~" << s.size() << endl;
	for (int i = 0; i <= (s.size() + 1) / 2 - 1; i++) {
		if (left[i] == right[right.size() + 1 - i]) {
			continue;
		} else
			ians++;
	}
	long long jans = 0;
	for (int i = 0; i <= (s.size() + 1) / 2 - 1; i++) {
		if (left[left.size() + 1 - i] == right[i]) {
			continue;
		} else
			jans++;
	}
	cout << min(ians, jans);
	return 0;
}
