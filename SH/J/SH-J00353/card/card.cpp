#include<bits/stdc++.h>
using namespace std;
int a[500005], b[500005], c[500005], t[300005];
int flag[200005];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int m, n;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++) { //本局游戏开始
		memset(b, -1, sizeof(b));
		memset(c, -1, sizeof(c));
		memset(flag, -1, sizeof(flag));
		int s = 1, k = 1;
		for(int j = i; j <= n; j++) { //游戏预留卡槽位
			b[s] = a[j];
			s++;
		}
		for(int j = 1; j <= n - i + 1; j++) { //开始游戏
			if(flag[b[j]] == -1) {
				c[k++] = b[j];
				flag[b[j]] = j;//标记数字出现地点
			} else {
				int f = 0;
				for(int l = flag[b[j]] + 1; l <= n; l++) {
					if(c[l] == -1) {
						f = l - 1;
						break;
					}
				}
				for(int l = flag[b[j]] + 1; l <= flag[b[j]] + f + 1; l++) {
					c[l] = -1;
					flag[c[l]] = -1;
				}
				k -= f - 1;
			}
		}
		for(int j = 1; j <= m; j++) {
			if(c[j] == -1) break;
			t[c[j]]++;
		}
	}
	for(int i = 1; i <= m; i++) {
		cout << t[i] << " ";
	}
	return 0;
}

