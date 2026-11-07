#include<bits/stdc++.h>
#define ll  unsigned long long
using namespace std;
int n;
string st;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		ll s;
		char ch;
		cin >> s >> ch;
		while (s--) {
			st += ch;
		}
	}
	ll len = st.size();
	string str = st;
	reverse(str.begin(), str.end());
	if (st == str)cout << 0;
	else {
		ll cnt = 0, cnt1 = 0;
		for (ll i = 0; i < len / 2; i++) {
			if (st[i] != st[len - i]) {
				cnt++;
			}
		}
		for (ll i = len; i > len / 2; i--) {
			if (st[i] != st[abs((long long)(i - len))]) {
				cnt1++;
			}
		}
		cout << min(cnt, cnt1);
	}
	return 0;
}