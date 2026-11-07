#include <bits/stdc++.h>
using namespace std;
int n;
string s;
long long ans = 0;
long long mid;
long long j;

void ss() {
	for (int i = 0; i < mid; i++) {
		if (s[i] != s[j - i]) {
			ans++;
		}
	}
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		long long h;
		char a;
		cin >> h >> a;
		while (h--) {
			s[j] = a;
			j++;
		}
	}
	j--;
	mid = j / 2 + 1;
	ss();
	cout << ans;
	return 0;
}