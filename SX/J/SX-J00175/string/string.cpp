#include <iostream>
#include <algorithm>
#include <cstring>
#define int long long
using namespace std;
int n, sum = 0, m, cnt = 0;
string s;


signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a;
		char c;
		cin >> a >> c;
		for (int  i = 1; i <= a; i++)
			s += c;
		sum += a;
	}
	s = '?' + s;
	m = s.size() - 1;
	for (int i = m; i >= m / 2 + 1 + (m % 2 == 1); i--)
		for (int j = 1; j <= m / 2; j++) {
			if (s[i] != s[j])
				cnt++;
		}
	cout << cnt;
	return 0;
}
