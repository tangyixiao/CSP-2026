#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	int N;
	cin >> N;
	
	ll a[N + 5];
	char s[N + 5];
	ll L = 0;
	
	for (int i = 1; i <= N; i++) {
		cin >> a[i] >> s[i];
		L += a[i];
	}
	
	ll ans = 0, l = 0, r = 0;
	int l_i = 1, r_i = N;
	
	while (1) {
//		cout<<l_i<<' '<<l<<' '<<r_i<<' '<<r<<'\n';
		if (l_i >= r_i)break;
		if (s[l_i] == s[r_i]) {
			int t = min(a[l_i] - l, a[r_i] - r);
			if (a[l_i] - l < a[r_i] - r) {
				l = 0, r += t;
				l_i++;
			} else if (a[l_i] - l > a[r_i] - r) {
				r = 0, l += t;
				r_i--;
			} else {
				l = 0, r = 0;
				l_i++, r_i--;
			}
		} else {
			int t = min(a[l_i] - l, a[r_i] - r);
			
//			cout<<a[l_i]-l<<' '<<a[r_i]-r<<"\n";
			
			if (a[l_i] - l < a[r_i] - r) {
				l = 0, r += t;
				l_i++;
			} else if (a[l_i] - l > a[r_i] - r) {
				r = 0, l += t;
				r_i--;
			} else {
				l = 0, r = 0;
				l_i++, r_i--;
			}
			ans += t;
		}
	}
	cout << ans;
	return 0;
}
/*
5
1 a
1 b
1 c
1 d
16 c

3

*/