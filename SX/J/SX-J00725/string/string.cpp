#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+6;
int n, a[2000];
char ch[2000];
string s[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cin >> ch[i];
	}
	if (ch[1] == ch[2])
		cout << 0;
	else if (a[1] > a[2])
		cout << a[2];
	else
		cout << a[1];
	return 0;
}