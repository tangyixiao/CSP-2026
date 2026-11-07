#include <bits/stdc++.h>
using namespace std;
//保险起见用LL
typedef long long ll;
const int N = 2e5+248;
ll n, m, a[N], mxa;
bool use[N], nuse[N];

//这是啥算法啊，看不出来，不过感觉是
//从最高位开始看，是否可能保存（and一定不变或变小）
//从刚刚找到的可保存的中再找次高位....循环，直到最低位
//时间复杂度O(n*30*3)<=(1.6)e7  100pts
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		mxa = max(mxa, a[i]);
		use[i] = true;
	}
//	bool save = false; //(save,是否可以保留，而不是没有)
	ll ans = (1LL << 31) - 1; //30位上全是1，直接与
	for (int i = 30; i >= 0; i--) {
		ll now = (1 << i);
		if (now > mxa) {
			continue;
		}
		memset(nuse, 0, sizeof(nuse));
		ll sfind = 0; //sumfind
		for (int j = 1; j <= n; j++) {
			if (!use[j]) {
				nuse[j] = false;
				continue;
			}
			if (((a[j] >> i) & 1)) {
				nuse[j] = true;
				sfind++;
			}
		}
		//	cout << i << ' ' << sfind << endl;
		if (sfind < m) {
			continue;
		} else {
			//	save = true;
			for (int j = 1; j <= n; j++) {
				use[j] = nuse[j];
				//	cout << "please<" << use[j] << endl;
			}
		}

	}
//	cout << "sssvve" << save << endl;
	for (int j = 1; j <= n; j++) {
		if (use[j]) {
			ans = (ans &a[j]);
			//	cout << "imangry!:" << j << endl;
		}

	}
	//给我对吧求你了
	cout << ans;
	return 0;
}