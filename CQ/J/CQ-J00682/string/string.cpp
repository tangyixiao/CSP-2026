#include<bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define pii pair<int, int>
using namespace std;
const int N = 2e5 + 5;
struct node {
	int cnt;
	char c;
} x[N];
int n;
int main () {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	fastio;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> x[i].cnt >> x[i].c;
	}
	int l = 1, r = n;
	ll ans = 0, tmp1 = 0, tmp2 = 0; // tmp表示当前匹配个数
	while(l <= r) {
		if(x[l].c == x[r].c) {
			tmp1 = tmp2 = min(x[l].cnt, x[r].cnt);
			if(x[l].cnt > x[r].cnt) x[l].cnt -= x[r].cnt, r--;
			else x[r].cnt -= x[l].cnt, l++;
			continue;
		}
		if(tmp1 + x[l].cnt < tmp2 + x[r].cnt) {
			tmp1 += x[l].cnt;
			tmp2 += x[l].cnt;
			ans += x[l].cnt;
			x[r].cnt -= x[l].cnt;
			l++;
		} else {
			tmp1 += x[r].cnt;
			tmp2 += x[r].cnt;
			ans += x[r].cnt;
			x[l].cnt -= x[r].cnt;
			r--;
		}
		//	cout <<l  << " " << r << endl;
		//	cout << tmp1 << " " << tmp2 << endl;
	}
	cout << ans << endl;
	return 0;
}

