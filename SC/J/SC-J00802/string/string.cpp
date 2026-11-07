#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 2e5 + 5;
//int t[MAXN];
//char c[MAXN];
//bool v[26];
//int a[MAXN];
string s;
bool v[MAXN];
signed main () {
	ios::sync_with_stdio (false);
	cin.tie (0);
	freopen ("string.in" , "r" , stdin);
	freopen ("string.out" , "w" , stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		char y;
		cin >> x >> y;
		for (int i = 1; i <= x; i++) {
			s += y;
		}
	}
	int len = s.size ();
	bool flag = true;
	for (int i = 1; i < len; i++) {
		if (s[i] != s[i - 1]) {
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << 0 << endl;
		return 0;
	}
	
	int cnt = 0;
	if (len % 2 != 0) {
		cnt = len / 2;
		for (int i = 0; i < len / 2; i++) {
			for (int j = len / 2 + 1; j < len; j++) {
				if (s[i] == s[j] && !v[i] && !v[j]) {
					cnt -= 2;
					v[i] = true;
					v[j] = true;
				}
			}
		}
	}
	else {
		cnt = len / 2;
		for (int i = 0; i < len / 2; i++) {
			for (int j = len / 2; j <= n; j++) {
				if (s[i] == s[j] && !v[i] && !v[j]) {
					cnt--;
					v[i] = true;
					v[j] = true;
				}
			}
		}
	}
	cout << cnt << endl;



//	int n;
//	cin >> n;
//	int len = 0;
//	for (int i = 1; i <= n; i++) {
//		cin >> t[i] >> c[i];
//		len += t[i];
//	}
//	int cnt = 0;
//	if (len % 2 == 0) {
////		int pos = 0;
////		for (int i = 1; i <= n; i++) {
////			if (pos + t[i] < len) {
////				pos += t[i];
////			}
////			else {
////				
////			}
////		}
//		int pos = 0;
//		bool flag = true;
//		int p = 0;
//		for (int i = 1; i <= n; i++) {
//			if (pos + t[i] < len / 2) {
//				pos += t[i];
//				v[c[i] - 'a'] = true;
//				a[i] = t[i];
//			}
//			else {
//				pos += t[i];
//				t[i] -= (pos - len / 2) * 2;
//				pos -= (pos - len / 2) * 2;
//				a[i] = t[i];
//				p = i;
//				if (i == 1) {
//					flag = false;
//				}
//				break;
//			}
//		}
//		cnt = pos;
//		if (flag) {
//			for (int i = p + 1; i <= n; i++) {
//				for (int j = 0; j < 26; j++) {
//					if (v[j] && c[i] == j + 'a') {
//						cnt -= min (t[i] , a[i])
//					}
//				}
//			}
//		}
//		else {
//			
//		}
//	}
}