#include <bits/stdc++.h>
using namespace  std;
const int N = 2 * 1e5+10;
const int M=1e9;
struct st {
	int num;
	string zi;
};
st s[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string a = "";
	for (int i = 1; i <= n; i++) {
		cin >> s[i].num >> s[i].zi;
	}
	bool flag = 1;
	for (int i = 2; i <= n; i++) {
		if (s[i].zi == s[i - 1].zi) {
			flag = 1;
		} else {
			flag = 0;
			break;
		}
	}
	if (flag) {
		cout << "0";
		return 0;
	}
	int l = 1;
	int r = n;
	long long ans = 0;
	int sum=0;
	while (l <= r) {
		if (s[l].num > s[r].num) {
			if (s[l].zi != s[r].zi) {
				ans += min(s[l].num, s[r].num);
				s[l].num -= s[r].num;
				s[r].num = 0;
			} else {
				s[l].num -= s[r].num;
				s[r].num = 0;
			}
		} else {
			if (s[l].zi != s[r].zi) {
				ans += min(s[l].num, s[r].num);
				s[r].num -= s[l].num;
				s[l].num = 0;
			} else {
				s[r].num -= s[l].num;
				s[l].num = 0;
			}
		}
		if (s[l].num == 0) {
			l++;
		}
		if (s[r].num == 0) {
			r--;
		}
		sum+=ans/M;
	}
	cout << ans+sum*M;
	return 0;
}
