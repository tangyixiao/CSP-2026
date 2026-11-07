#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int n,cnt;
int a[N],ans = INT_MAX;
string s,c,b;
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c;
		ans = min(ans,a[i]);
		for (int j = 0; j < a[i]; j++) {
			s += c;
		}
	}
	bool f = 0;
	b = s;string l,r;
	reverse(b.begin(),b.end());
	if (b == s) {cout << "0"; f = 1;return 0;}
	if (n <= 1) {cout <<"0"; return 0;}
	if (n == 2 && f == 0) {
		cout << ans;
		return 0;
	}
	else {
		int len = s.size(),mid;
		if (len % 2 != 0) {
			mid = len / 2;
			for (int i = 0; i < mid; i++)l += s[i];
			for (int j = mid +1;j<len;j++) r += s[j];
			for (int i = 0; i <= mid; i++) {
				for (int j = 0;j < r.size();j++) {
					if (l[i] != r[j]) {
						i++;
						j++;
						cnt++;
					}
				}
			}
			cout << cnt;
			return 0;
		}
		cout << len / 2;
	}
		
	return 0;
}
//Trick||Treat!
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
