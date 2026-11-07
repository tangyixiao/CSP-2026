#include<bits/stdc++.h>
#define int long long
using namespace std;
int n, a[10000005];
char c[1000005];
string s;
int ans = 0;
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1;i <= n; i++) {
		cin >> a[i] >> c[i];
		for (int j = a[i]; j >= 1; j--) {
			ans ++;
			s[ans] = c[i];
		}
	} 
	int cnt = 0;
	for (int i = 1;i <= ans / 2; i++) {
	    if (s[i] != s[ans - i + 1]) {
		    cnt++;
		}
    }
	cout << cnt ;
	
	
	return 0;
}
