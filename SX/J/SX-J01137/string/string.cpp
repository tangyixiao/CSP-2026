#include <bits/stdc++.h>
using namespace std;
int sum, h;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	int a;
	cin >> a;
	int b[a + 10];
	string k[a + 10];
	for (int i = 0; i < a; i++) {
		cin >> b[i] >> k[i];
		for (int j = 0; j < b[i]; j++) {
			s += k[i];
		}
	}
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[s.size() - i]) {
			s[i] = s[s.size() - i];
			sum++;
		}
	}

	cout  << sum;
	return 0;
}
