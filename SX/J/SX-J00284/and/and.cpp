#include <bits/stdc++.h>
using namespace std;
int a[100];
string b[100];

int main() {
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[100] >> b[100];
		cnt += a[i];
		if (b[i] == b[i + 1]) {
			cout << 0;
		} else {
			cout << 1;
		}
	}
	return 0;
}
