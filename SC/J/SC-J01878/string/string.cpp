#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn = 2e5 + 10;
int a[maxn];
char c[maxn];
string s;
int n;
ll len = 0, ans = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	s = '#' + s;
	for (int i = 1; i <= n; i ++ ) {
		cin >> a[i] >> c[i];
		len += a[i];
		for (int j = 1; j <= a[i]; j ++ ) {
			s += c[i];
		}
	}
	for (int i = 1; i <= len / 2; i ++ ) {
			if (s[i] != s[len - i + 1]) ans ++;
		} 
	cout << ans << "\n";
	return 0;
}
