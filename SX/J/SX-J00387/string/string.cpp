#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k, l, sum;
char c;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		cin >> c;
		for (int j = 0; j < k; j++) {
			s[l] = c;
			l++;
		}
	}
	ll e = l, r = 0;
	for (int i = e - 1; i >= 0; i--) {
		for (int j = r; j < l; j++) {
			if (s[i] != s[j]) {
				sum++;
			}
			e--;
			r++;
			cout << s[i] << " " << s[j] << " " << sum << endl;
			break;
		}
	}
	cout << sum / 2;
}
