#include <bits/stdc++.h>
using namespace std;
int s[100];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "r", stdout);
	int n, ans = 0;
	cin >> n ;
	for (int i =  1; i <= n; i++) {
		if (s[i] != s[n - i]) {
			ans++;
			i++;
		}
	}
	cout << ans;
	return 0;
}

