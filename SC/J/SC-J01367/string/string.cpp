#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5, MN = INT_MIN, MX = INT_MAX;
int n, sum1, ans;
struct node{
	int s;
	char c;
}a[N];
stack <node> st;
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		scanf("%lld %c", &a[i].s, &a[i].c);
		sum1 += a[i].s;
	}
	if (sum1 % 2 == 0) {
		sum1 = sum1 / 2;
		int i = 0;
		for (i = 0 ; i < n ; i++) {
			if (a[i].s < sum1) {
				sum1 -= a[i].s;
				st.push({a[i].s, a[i].c});
			} else {
				st.push({sum1, a[i].c});
				a[i].s -= sum1;
				if (st.top().s <= 0)
					st.pop();		
				break;
			}
		}
		for (; i < n ; i++) {
			while (!st.empty() && a[i].s > 0 && st.top().s <= a[i].s) {
				if (st.top().c == a[i].c) {
					int ch = st.top().s;
					st.top().s -= a[i].s;
					if (st.top().s <= 0)
						st.pop();
					a[i].s -= ch;
				} else {
					int ch = st.top().s;
					ans += min(ch, a[i].s);
					st.top().s -= a[i].s;
					if (st.top().s <= 0)
						st.pop();
					a[i].s -= ch;
				}
			}
			if (!st.empty() && a[i].s > 0 && st.top().s > a[i].s) {
				st.top().s -= a[i].s;
				if (st.top().c != a[i].c) 
					ans += a[i].s;
			}
		}
	} else {
		sum1 = sum1 / 2;
		int i = 0;
		for (i = 0 ; i < n ; i++) {
			if (a[i].s < sum1) {
				sum1 -= a[i].s;
				st.push({a[i].s, a[i].c});
			} else {
				st.push({sum1, a[i].c});
				a[i].s -= sum1;
				if (a[i].s == 0)
					i++;
				a[i].s--;		
				break;
			}
		}
		for (; i < n ; i++) {
			while (!st.empty() && a[i].s > 0 && st.top().s <= a[i].s) {
				if (st.top().c == a[i].c) {
					int ch = st.top().s;
					st.top().s -= a[i].s;
					if (st.top().s <= 0)
						st.pop();
					a[i].s -= ch;
				} else {
					int ch = st.top().s;
					ans += min(ch, a[i].s);
					st.top().s -= a[i].s;
					if (st.top().s <= 0)
						st.pop();
					a[i].s -= ch;
				}
			}
			if (!st.empty() && a[i].s > 0 && st.top().s > a[i].s) {
				st.top().s -= a[i].s;
				if (st.top().c != a[i].c) 
					ans += a[i].s;
			}
		}
	}
	cout << ans;
	return 0;
}
