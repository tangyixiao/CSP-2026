#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, x, sum;
char c;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x >> c;
		for (int j = 1; j <= x; j++)
			s += c;
	}
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() - i - 1])
			sum++;
	}
	cout << sum;
	return 0;
}
