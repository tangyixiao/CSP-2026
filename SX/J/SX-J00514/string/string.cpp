#include <bits/stdc++.h>
using namespace std;
string total, c;
int n;


struct duan {
	long long aa;
	string cc;
};
duan ans[10000005];

long long ishw(string total, int n) {
	long long end = total.size();
	long long  l = 0, r = end - 1, cnt1 = 0, cnt2 = n;
	string temp = total;
	long long ans;
	if (n == 1) {
		return 0;
	}
	for (int i = 0; i <= end / 2; i++) {
		if (i == 0) {
			continue;
		} else {
			if (temp[i] != temp[i - 1]) {
				cnt1++;
			}
		}
		if (i == 0) {
			continue;
		} else {
			if (temp[n - i] != temp[n - i + 1]) {
				cnt2--;
			}
		}
		if (temp[l] == temp[r]) {
			if (ans[cnt1].aa == ans[cnt2].aa) {

				l++;
				r--;

			} else {
				l++;
				r--;
				ans1 += abs(ans[cnt1].aa - ans[cnt2].aa);
			}
		} else {
			if (ans[cnt1].aa == ans[cnt2].aa) {
				ans += ans[cnt1].aa;
				l++;
				r--;

			} else {
				l++;
				r--;
				ans1 += abs(ans[cnt1].aa - ans[cnt2].aa);
			}
		}
		int main() {
			freopen("string.in", "r", stdin);
			freopen("string.out", "w", stdout);
			cin >> n;
			for (int i = 1; i <= n; i++) {
				cin >> a >> c;
				ans[i].aa = a;
				ans[i].cc = c;
				for (int i = 1; i <= a; i++) {
					total += c;

				}

			}
			cout << ishw(total, n);
			return 0;
		}
