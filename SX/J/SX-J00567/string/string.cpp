#include <bits/stdc++.h>
using namespace std;
int n, num[200005], yj[200005], zj[200005], cnt;
char c[200005];
long long sum;


//int check(int d) {
//	if(sum%2==1) {
//
//	}
//}
int main() {

//	freopen("string.in", "r", stdin);
//	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	if (n == 1) {
		cout << 0;
		return 0;
	}
	num[0] = 0;
	c[0] = '*';
	int cl, wz, cs, qm, hm;
	for (int i = 1; i <= n; i++) {
		int t1;
		char t2;
		cin >> t1 >> t2;
		sum += t1;
		if (c[cnt] == t2) {
			num[cnt] += t1;
			continue;
		}
		cnt++;
		num[cnt] = t1, c[cnt] = t2;
	}
	int tsum = 0;
	for (int i = 1; i <= cnt; i++) {
		tsum += num[i];
		yj[i] = tsum;
		zj[i] = tsum - num[i] + 1;
		if (tsum >= ceil(1.0 * sum / 2)) {
			cs = tsum - num[i] + 1;
			cl = i;
			wz = num[i] - (tsum - sum / 2) + 1;
//			cout << (tsum - sum / 2) << endl;
			break;
		}
	}
	cnt++;
	if (sum % 2 == 1) {
		for (int i = cnt; i >= cl + 2; i--) {
			num[i] = num[i - 1];
		}
		sum--;
		num[cl] = wz - 1;
		num[cl + 1] = yj[cl] - zj[cl] + 1 - wz;
	}
	if (cnt == 1) {
		cout << 0;
		return 0;
	}
	int ans = 0;
	int a = num[1], b = num[cnt];
	for (int i = 1, j = cnt; i <= cl, j >= cl + 1;) {
		if (c[i] == c[j]) {
			if (a > b) {
				a -= b;
				b = num[--j];
			} else if (a == b) {
				a = num[++i];
				b = num[--j];
			} else {
				b -= a;
				a = num[++i];
			}
		} else {
			if (a > b) {
				ans += b;
				a -= b;
				b = num[--j];
			} else if (a == b) {
				ans += a;
				a = num[++i];
				b = num[--j];
			} else {
				ans += a;
				b -= a;
				a = num[++i];
			}
		}
	}
	cout << ans << endl;
	return 0;
}
// aabbc
