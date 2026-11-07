#include <bits/stdc++.h>
using namespace std;
int cnt;

string rev(string x) {
	string y;
	for (int i = x.size() - 1; i >= 0; i--)
		y += x[i];
	return y;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	string s, s1;
	int n, a;
	char cha;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> cha;
		for (int j = 0; j < a; j++)
			s = s + cha;
	}
	s1 = rev(s);
	if (s == s1) {
		cout << 0;
		return 0;
	}
	int sss = int(s.size());
	if (sss % 2 == 0) {
		s1 = "";
		for (int i = sss / 2; i < sss; i++)
			s1 += s[i];
		s1 = rev(s1);
		s.erase(sss / 2, sss / 2);
		for (int i = 0; i < sss / 2; i++) {
			if (s[i] != s1[i])
				cnt++;
		}
	} else {
		s1 = "";
		for (int i = sss / 2 + 1; i < sss; i++) {
			s1 += s[i];

		}
		s1 = rev(s1);
		s.erase(sss / 2, sss / 2 + 1);
		for (int i = 0; i < sss / 2; i++) {
			if (s[i] != s1[i])
				cnt++;
		}
	}
	cout << cnt;
	return 0;
}
