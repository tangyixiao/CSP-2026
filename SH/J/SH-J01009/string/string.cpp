#include <bits/stdc++.h>
using namespace std;
bool hw(vector<char> s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[s.size()-1-i]) {
			return false;
		}
	}
	return true;
}
vector<char> s;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		char c;
		cin >> c;
		for (int j = 0; j < t; j++) {
			s.push_back(c);
		}
	}
	if (hw(s)) {
		cout << 0;
		return 0;
	}
	int cnt = 0;
	int half = s.size() / 2;
	for (int i = 0; i < half; i++) {
		if (s[i] != s[s.size()-1-i]) {
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
} 
