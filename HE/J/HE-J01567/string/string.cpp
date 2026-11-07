#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
long long n, a[N], len, ans;
char c[N];
string s;
struct node {
	int x, id;
	char c;
}t;
int main () {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n; 
	for (int i = 1;i <= n;i ++) {
		cin >> a[i] >> c[i];
		len += a[i];
		for (int j = 1;j <= a[i];j ++) s += c[i];
	}
	if (len > 1e8) {
		for (int i = 1, j = n;i <= n && j >= i;i ++, j --) {
//		cout << 1;
		if (t.x) {
			while (t.x > 0 && t.id < j && t.id <= n) {
//				cout << 1;
//				cout << i << " " << j <<"\n";
//				cout << t.x << " " << t.c << " " << t.id << " " << j << " " << a[2] << "\n";
				if (t.c != c[j]) {
					if (t.x > a[j]) {
						ans += a[j];
						t.x -= a[j];
						a[j] = 0;
					} else if (t.x < a[j]) {
						ans += t.x;
						a[j] -= t.x;
						t.x = 0;
					} else {
						ans += t.x;
						a[j] = 0;
						t.x = 0;
					}
				} else {
					if (t.x > a[j]) {
						t.x -= a[j];
						a[j] = 0;
					} else if (t.x < a[j]) {
						a[j] -= t.x;
						t.x = 0;
					} else {
						a[j] = 0;
						t.x = 0;
					}
				}
				
				j --;
				
			}
			j ++;
//			cout << j << "\n";
			t.x = 0;
			if (t.id == i - 1) {
				if (t.c != c[j]) {
					ans += t.x;
					a[j] -= t.x;
				} else {
					a[j] -= t.x;
				}
			}
			if (t.id == j + 1) {
				if (t.c != c[i]) {
					ans += t.x;
					a[i] -= t.x;
				} else {
					a[i] -= t.x;
				}
			}
		}
		if (c[i] != c[j]) {
			
			if (a[i] < a[j]) {
				ans += a[i];
				t.c = c[j];
				t.id = j;
				t.x = a[j] - a[i];
			} else if (a[j] < a[i]){
				ans += a[j];
				t.c = c[i];
				t.id = i;
				t.x = a[i] - a[j];
			} else {
				ans += a[j];
			}
		} else {
			if (a[i] < a[j]) {
				t.c = c[j];
				t.id = j;
				t.x = a[j] - a[i];
			} else if (a[j] < a[i]){
				t.c = c[i];
				t.id = i;
				t.x = a[i] - a[j];
			} else {
				
			}
		}
	}
		cout << ans;
		return 0;
	}
//	cout << s << " " << len << "\n";
	for (int i = 0;i < len / 2;i ++) {
//		cout << s[i] << " " << s[len + 1 - i] << "\n";
		if (s[i] != s[len - i - 1]) ans ++;
	}
	cout << ans;
	return 0;
}
