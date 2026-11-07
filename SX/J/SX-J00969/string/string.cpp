#include <bits/stdc++.h>
using namespace std;
string s;
long long n, sum, ans, k;
int a[200010];
char c;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c;
		sum = sum + a[i];

		for (int j = 1; j <= a[i]; j++) {
			s = s + c;
		}
	}
	k = sum;

	if (sum % 2 == 0)
		sum--;

	for (int i = 0; i <= sum / 2; i++) {
		if (s[i] != s[k - 1 - i])
			ans++;
	}
	cout << ans;





	return 0;
}
