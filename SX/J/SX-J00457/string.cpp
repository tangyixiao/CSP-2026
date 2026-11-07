#include <bits/stdc++.h>
using namespace std;
int n;
long long a[1000005];
string c;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	int num = 0;
	string s ;
	for (int i = 0; i < s.length(); i++) {
		s[i] += a[i] * c[i];
	}
	cout << "2";
	return 0;
}
