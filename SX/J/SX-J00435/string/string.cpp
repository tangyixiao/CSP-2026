#include <bits/stdc++.h>
using namespace std;
string s;
long long a;
char c;
unsigned long long ans = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		for (int j = 0; j < a; j++) {
			s += c;
		}
	}
	for (unsigned long long i = 0; i < s.size() / 2; i++) {
		unsigned long long j = s.size() - i - 1;
		char q = s[i], w = s[j];
		if (q != w)
			ans++;
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

