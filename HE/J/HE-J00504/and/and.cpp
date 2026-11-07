#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
using ll = long long;

const int N = 2e5 + 5;

int n, m;
ll a[N];
int cnt[35];
vector<ll> nums[35];
bool flag[N];

void work(ll num) {
	for (int bit = 30;bit >= 0;bit--) {
		if ((num >> bit) & 1) {
			cnt[bit]++;
			nums[bit].push_back(num);
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	memset(flag, true, sizeof(flag));
	cin >> n >> m;
	for (int i = 1;i <= n;i++) {
		cin >> a[i];
		work(a[i]);
	}
	ll ans = 0;
	int pos = 0;
	for (int bit = 30;bit >= 0;bit--) {
		if (cnt[bit] >= m) {
			pos = bit;
			break;
		}
	}
	ans = 1 << pos;
	int cntt = cnt[pos];
	for (int bit = pos - 1;bit >= 0;bit--) {
		for (int i = 0;i < nums[pos].size();i++) {
			if (flag[i] == false) continue;
			if (((nums[pos][i] >> bit) & 1) == 0) {
				flag[i] = false;
				cntt--;
			}
		}
		if (cntt >= m) ans += (1 << bit);
	} 
	cout << ans << '\n';
	return 0;
}
