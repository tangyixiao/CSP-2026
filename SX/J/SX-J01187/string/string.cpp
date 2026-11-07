#include <bits/stdc++.h>
using namespace std;
string s;
char c;
int n, a, ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	while (n--) {
		cin >> a >> c;
		for (int i = 0; i < a; i++) {
			s += c;
		}
	}
	int i = 0, j = s.size() - 1;
	while (i < j) {
		if (s[i] != s[j]) {
			ans++;
		}
		i++;
		j--;
	}
	cout << ans ;
}
