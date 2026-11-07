#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n;
int a[N];
char c[N];
string s;
string S;
int cnt;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		for (int j = 0; j < a[i]; j++) {
			s += c[i];
		}

	}
	int len = s.length();
	for (int i = len - 1; i >= 0; i--) {
		S += s[i];
	}
	int mid = len / 2;
	for (int i = 0; i < mid; i++) {
		if (s[i] != S[i]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}