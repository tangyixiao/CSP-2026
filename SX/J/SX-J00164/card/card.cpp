#include <bits/stdc++.h>
using namespace std;
int n, m, num[500005];
int dui[500005];
int ans[300005];

struct zzq {
	bool cnt;
	int xy;
};
zzq weizhi[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
	}
	for (int k = 1; k <= n; k++) {
		for (int i = k; i <= n; i++) {
			if (weizhi[num[i]].cnt == 0) {
				weizhi[num[i]].xy = i;
				weizhi[num[i]].cnt = 1;
				dui[i] = num[i];
			} else {
				for (int j = weizhi[num[i]].xy + 1; j <= i; j++) {
					weizhi[dui[j]].cnt = 0;
					dui[j] = 0;
				}

			}
		}
		for (int i = 1; i <= n; i++) {
			cout << dui[i] << " ";
			ans[dui[i]]++;
		}
		cout << endl;
		for (int i = 1; i <= n; i++) {
			dui[i] = 0;
		}
		for (int i = 1; i <= m; i++) {
			weizhi[i].xy = 0;
			weizhi[i].cnt = 0;
		}
	}

	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
