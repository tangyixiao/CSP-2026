#include <bits/stdc++.h>
using namespace std;
char c;
int n, b, l, num;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	while (n--) {
		cin >> b >> c;
		l += b;
		for (int i = 0; i < b; i++) {
			s += c;
		}
	}
	int i, j = 0;
	j = s.size() - 1;
	while (i < j) {
		i++;
		j--;
		if (s[i] != s[j])
			num += b;
	}
	cout << num;
	//111
	return 0;
}
