#include <bits/stdc++.h>
using namespace std;
string s1, s2;

bool cmp(string s1) {
	bool r;
	int k = 0;
	for (int i = s1.size() - 1; i >= 0; i--) {
		s2[k] = s1[i];
		k++;
	}
	for (int i = 0; i <= s1.size() - 1; i++) {
		if (s1[i] == s2[i])
			r = true;
		else
			r = false;
	}
	return r;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, a[200];
	string b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	cout << "2";
	if (cmp(s1) == true)

		return 0;
}
