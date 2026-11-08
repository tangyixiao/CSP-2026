#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
struct node{
	int a;
	char c;
} x[200005];
string s;
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> x[i].a >> x[i].c;
		for(int j = 1; j <= x[i].a; j++) {
			s += x[i].c;
		}
	}
	int len = s.size();
	string t = " " + s;
	s = " " + s;
	int cnt1 = 0, cnt2 = 0;
	for(int i = 1; i <= len; i++) {
		if(t[i] != t[len-i+1]) {
			t[i] = t[len-i+1];
			cnt1++;
		}
	}
	for(int i = len; i >= 1; i--) {
		if(s[i] != s[len-i+1]) {
			s[i] = s[len-i+1];
			cnt2++;
		}	
	}
	cout << min(cnt1, cnt2);
	return 0;
}

