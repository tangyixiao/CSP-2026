#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 5;
const ll inf = 1e18;
ll n, len, ans;

struct node {
	ll l, r;
	char c;
} s[N], s2[N];

void solve() {
	cin>>n;
	for(int i = 1; i <= n; i++) {
		int a;
		cin>>a>>s[i].c;
		s[i].l = len + 1;
		len += a;
		s[i].r = len;
	}
	
	for(int i = 1; i <= n; i++) {
		s2[i] = {len - s[n - i + 1].r + 1, len - s[n - i + 1].l + 1, s[n - i + 1].c};
	}

	int i = 1, j = 1;
	while(i <= n && j <= n) {
//		cout<<s[i].r<<" "<<s2[j].r<<" ";
		if(s[i].c != s2[j].c) {
			ll st = max(s[i].l, s2[j].l);
			if(s[i].r == s2[j].r) {
				ans += s[i].r - st + 1;
				i++, j++;
			} else if(s[i].r < s2[j].r) {
				ans += s[i].r - st + 1;
				i++;
			} else {
				ans += s2[j].r - st + 1;
				j++;
			}
		} else {
			if(s[i].r == s2[j].r) {
				i++, j++;
			} else if(s[i].r < s2[j].r) {
				i++;
			} else {
				j++;
			}
		}
//		cout<<ans<<"\n";
	}

	cout<<ans / 2;

}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
