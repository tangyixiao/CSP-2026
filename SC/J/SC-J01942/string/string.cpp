#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5+5;
struct node {
	ll a;
	char c;
	//a表示个数,c表示字符
} s[N];
ll n;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i].a >> s[i].c;
	}
	ll i = 1, j = n;
	ll t1 = 0, t2 = 0;
	ll ans = 0;
	while (true) {
		if (i == j) break;
		ll p1, p2;
		p1 = s[i].a - t1, p2 = s[j].a - t2;
		ll minv = min(p1, p2);
		bool b = (s[i].c == s[j].c);
		if (!b) {
			ans += minv;
		}
		if (p1 < p2) {
			i++;
			t1 = 0;
			t2 += minv;
		} else if (p1 > p2) {
			j--;
			t2 = 0;
			t2 += minv;
		} else {
			i++, j++;
			t1 = 0, t2 = 0;
		}
	}
	cout << ans;
	return 0;
}