#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, a[200005], tot, sum;
char  c[200005];
string s;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		for (int j = 1; j <= a[i]; j++)
			s[++tot] = c[i];
	}
	for (int i = 1; i <= tot / 2; i++) {
		if (s[i] != s[tot - i + 1]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
}
