#include <bits/stdc++.h>
using namespace std;
int cnt;
int m;
string n;
string a;
int num;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int x;
	cin >> x;
	for (int i = 1; i <= x; i++) {
		cin >> m >> n;
		for (int j = 1; j <= m; j++) {
			a = a + n;
		}
	}
	for (int i = 1; i <= (cnt + 1) / 2; i++) {
		if (a[i] != a[cnt + 1 - i]) {
			num++;
		}
	}
	cout << num;
}
