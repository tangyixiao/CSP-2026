#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
const int N = 1e5+5;
int n;
ll sum = 0, cnt = 0, ans = 0;
string s;
int num[N];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
		sum += num[i];
		char c;
		cin >> c;
		s += c;

	}
	cnt = n;
//	int i2 = 1;
	for (int i = 1; i <= cnt; i++) {
//		cout << "第" << i2 << "轮:";
//		i2++;
		if (num[i - 1] > 0) {
			i--;
		}
		while (num[cnt] == 0) {
			cnt--;
//			cout << '\n';
		}
		if (((num[i] <= num[cnt]) && (s[i - 1] != s[cnt - 1]) && (num[i] > 0) && (num[cnt] > 0))) {
//			cout << i << " " << cnt << ' ' << num[i] << ' ';
			ans += num[i];
			num[cnt] -= num[i];
			num[i] = 0;
//			cout << ans;
//			cout << '\n';
			continue;
		}
		if ((num[i] > num[cnt]) && (s[i - 1] != s[cnt - 1]) && (num[i] > 0) && (num[cnt] > 0)) {
//			cout << i << " " << cnt << ' ' << num[cnt] << ' ';
			ans += num[cnt];
			num[i] -= num[cnt];
			num[cnt] = 0;
			continue;
//			cout << ans;
		}
		if (s[i - 1] == s[cnt - 1]) {
			i++;
		}
//		cout << '\n';
	}
	cout << ans;
	return 0;
}
