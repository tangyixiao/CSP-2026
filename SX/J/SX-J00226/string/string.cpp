#include <bits/stdc++.h>
using namespace std;
#define ll long long
char a[1000001];
ll b[100001];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int c;
	cin >> c;
	for (int i = 1; i <= c; i++) {
		cin >> b[i] >> a[i];
	}
	sort(b + 1, b + 1 + c);
	cout << b[1];
	return 0;
}
