#include <bits/stdc++.h>
using namespace std;
int n, a[100005], c[100005], sum;
char s[100005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i <= n; i++) {
		cin >> a[i] >> c[i] ;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= a[i]; j++) {
			s[i] = c[j] + c[j + 1];
			if (s[j] != s[i]) {
				sum++;
				s[1]++;
				s[i]--;
			}

		}
		cout << sum;
	}

	return 0;
}
