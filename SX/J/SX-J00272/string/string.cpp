#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string s;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		string t;
		cin >> t;
		for (int j = 1; j <= x; j++) {
			s += t;
		}
	}
}
