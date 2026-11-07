#include <bits/stdc++.h>
using namespace std;
string S;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long a, ans = 0;
	char c;
	cin >> n;
	while (n--) {
		cin >> a >> c;
		for (int i = 1; i <= a; i++) {
			S += c;
		}
	}
	for (int i = 0; i < S.size() / 2; i++) {
		if (S[i] != S[S.size() - i - 1])
			ans++;
	}
	cout << ans;
	return 0;
}
