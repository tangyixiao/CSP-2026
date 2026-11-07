#include <bits/stdc++.h>
using namespace std;
long long n;
long long mx = 0;
long long cqO = 0;
long long l, r, qzl = 0, qzr = 0;
long long mid;

struct c {
	char p;
	long long num;
} chr[200010];
long long ans = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &chr[i].num);
		mx += chr[i].num;
		cin >> chr[i].p;
	}
	l = 1, r = n, qzl = chr[1].num, qzr = chr[n].num;
	long long temp = 0, lk = 0;
	for (int i = 1; i <= n; i++) {
		temp += chr[i].num;
		lk = i;
		if (temp >= mx / 2) {
			if (temp - chr[i].num > mx - temp) {
				lk--;
				break;
			} else
				break;
		}


	}
	while (1) {
		if (cqO < min(qzl, qzr)) {
			if (chr[l].p == chr[r].p)
				cqO = min(qzl, qzr);
			else {
				ans += min(qzl, qzr) - cqO;
				cqO = min(qzl, qzr);
			}
		}
		if (l == lk && r == lk + 1)
			break;
		long long movp = 0;
		if (l == lk) {
			movp = 1;
			qzr += chr[r - 1].num;
			r--;
		} else if (r == lk + 1) {
			movp = 1;
			qzl += chr[l + 1].num;
			l++;
		} else if (qzl < qzr) {
			movp = 1;
			qzl += chr[l + 1].num;
			l++;
		} else {
			movp = 1;
			qzr += chr[r - 1].num;
			r--;
		}
	}
	/*while (r - l > 0) {

		long long movp = 0;
		if (qzl <= qzr) { //&&qzl + chr[l + 1].num <= mx / 2) {

		}
		if (movp == 0 && qzr < qzl) { //&& qzr + chr[r - 1].num <= mx / 2) {

		}
		//cout << "suc" << " " << ans << " " << l << " " << r << endl;
	}*/
	//cout << r - l << qzl + chr[l + 1].num << " " << qzr + chr[r - 1].num << " " << qzl << " " << qzr << " " << mx / 2 <<endl;
	if (r - l == 1)
		printf("%lld", ans);
	/*else {
		if (qzl == qzr)
			printf("%lld", ans);
		else {
			if (qzr < qzl) {
				if (chr[l].p == chr[r - 1].p) {
					printf("%lld", ans);
				} else {
					printf("%lld", ans + abs(qzr - qzl));
				}
			} else {
				if (chr[r].p == chr[l + 1].p) {
					printf("%lld", ans);
				} else {
					printf("%lld", ans + abs(qzr - qzl));
				}
			}
		}
	}*/
	return 0;
}
