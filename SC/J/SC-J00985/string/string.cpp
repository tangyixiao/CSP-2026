#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
long long n, a, cnt1[50], l[N], r[N], num, op[N];
char c;
long long sum, mow, ans;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout); 
	cin >> n;
	for (int i = 1; i <= n; i ++) {
		cin >> a >> c;
		sum += a;
		l[++ num] = mow + 1;
		r[num] = mow + a;
		op[num] = c - 'a';
		mow += a;
	}
	mow = 0;
	for (int k = 1; k <= num; k ++) {
		mow += r[k] - l[k] + 1; 
		long long L = l[k], R = r[k];
		int rr = lower_bound(r+1, r+num+1, sum-L+1) - r;
		int ll = lower_bound(l+1, l+num+1, sum-R+1) - l;
		if (l[ll] > sum-R+1 || ll > num) ll --;
//		cout << ll << " " << sum - R + 1 << "\n";
		cnt1[op[ll]] += r[ll] - (sum-R+1) + 1;
//		cout << r[ll] - (sum-R+1) + 1 << "\n";
		cnt1[op[rr]] += sum-L+1 - l[rr] + 1; 
//		cout << cnt1[op[ll]] << " " << cnt1[op[rr]] << "\n";; 
		for (int i = ll+1; i <= rr-1; i ++) {
			cnt1[op[i]] += r[i] - l[i] + 1;
		}
		if (ll == rr) cnt1[op[ll]] = R - L + 1;
		for (int i = 0; i < 26; i ++) {
			if (i != (int)(op[k])) ans += cnt1[i];
			cnt1[i] = 0;
		}
//		cout << ans << "\n";
		if (mow >= sum / 2) break;
	}
	cout << ans << "\n";
	return 0;
}
