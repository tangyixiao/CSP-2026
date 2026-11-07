#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for(int i = (a); i <= (b); ++i)
#define fro(i, a, b) for(int i = (a); i < (b); ++i)
typedef long long ll;
ll n, len, diff;
string s;
string o, oo;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false), cin.tie(0);
	cin >> n;
	_for (i, 1, n) {
		char c;
		ll cnt;
		cin >> cnt >> c;
		len += cnt;
		_for (j, 1, cnt) s += c;
	}
//	cout << len;
//	cout << s;
	if (len % 2 == 0) {
		for (int l = 0, r = len - 1; l < len / 2, r >= len / 2; l++, r--) {
			if (s[l] != s[r]) diff++;
//			cout << diff << "\n";
		}
	}	
	else {
		for (int l = 0, r = len - 1; l < len / 2, r > len / 2; l++, r--) {
			if (s[l] != s[r]) diff++;
//			cout << diff << "\n";
		}
	}
	cout << diff;
	return 0;
}