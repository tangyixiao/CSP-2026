#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int n, m, x, ans;
vector<int> choose;
vector<int> nextt;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);
	// 输入数据
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		choose.push_back(x);
	}
	// 对于每一位二进制数位进行一次挑选
	for (int now = 30; now >= 0; now--) {
		// 记录这一位数位有多少个是1的数字
		int cnt = 0;
		for (int num : choose) {
			// 这一位数字是1
			if ((num & (1 << now))) {
				cnt++;
				nextt.push_back(num);
			}
		}
		//这种选择是可以够m个的
		if (cnt >= m) {
			choose = nextt;
			nextt.clear();
			ans = (ans | (1 << now));
		}
	}

	cout << ans;
	return 0;
}