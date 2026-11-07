#include <bits/stdc++.h>
using namespace std;
string s, s1;
int n, a, b;

int main() {
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		cin >> s;
		for (int j = 1; j <= a; j++) {
			s1 += s;
		}
	}
	cout << s1 << endl;
	for (int i = 0; i <= s1.size() / 2; i++) {
		for (int j = s1.size() - 1; j >= s1.size() / 2; j--) {
			if (s1.size() % 2 == 0) {
				if ((i - j) % 2 != 0)
					continue;
				if (s1[i] != s1[j]) {
					b++;
					cout << s1[i] << s1[j] << endl;
				}
				continue;
			}
			if (s1.size() % 2 == 1) {
				if (s1.size() / 2 - i != j - s1.size() / 2) {
					continue;
				} else if (s1[i] != s1[j]) {
					b++;
					cout << s1[i] << s1[j] << endl;
				}
			}
		}
	}
	cout << b;
}
