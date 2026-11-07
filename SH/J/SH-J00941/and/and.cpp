//贪心规则
//1. 永不舍弃一个较大的二次方去换取一个或多个较小的二次方
//2. 优先换取较大的二次方

#include <bits/stdc++.h>
using namespace std;

int dg[55][200005];
int dgc[55];

int dgn[55];

int a[200005];

int n,m;

long long d2[105] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1.04858e+006, 2.09715e+006, 4.1943e+006, 8.38861e+006, 1.67772e+007, 3.35544e+007, 6.71089e+007, 1.34218e+008, 2.68435e+008, 5.36871e+008, 1.07374e+009};

void cul(int num, int id) {
	int cnt = 0;
	int ct = num;
	while (ct > 0) {
		ct /= 2;
		cnt++;
	}
	while (num != 0) {
		if (num < d2[cnt]) {
			cnt--;
			continue;
		}
		num -= d2[cnt];
		dg[cnt][id]++;
		dgc[cnt]++;
	}
}

int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cul(a[i],i);
	}
	int now = 0;
	//换一种思路，我们直接枚举所有可能出现的二次方。
	//如果能够提供一个新的二次方的情况下而不损失更大的二次方，则必拿，因为我们是从大到小枚举的。 
	//但是如果我们必须要拿m个，但是在不损失更大的二次方的情况下我们拿不足m个，怎么办？ 
	//所以我们只能拿二次方出现次数大于等于m个的二次方，更小的哪怕拿了，也会损失掉。 
	int cur[200005];
	int num[200005];
	int id = 0;
	//int numid = 0;
	/*for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= 5; j++) {
			cout << dg[j][i] << " ";
		}
		cout << endl;
	}*/
	for (int i = 31; i >= 0; i--) {
		if (now == m) {
			break;
		}
		if (dgc[i] < m) {
			continue;
		}
		cur[++id] = i;
		bool vis = true;
		for (int j = 1; j <= n; j++) {
			vis = true;
			for (int k = 1; k <= id; k++) {
				if (dg[cur[id]][j] == 0) {  //如果你加入，会导致更大的二次方损失，所以你不能加入 
					vis = false;
					//cout << a[j] << " " << i << endl;
					break;
				}
			}
			if (vis) {
				now++;
				num[now] = j;
				//cout << a[j] << " ";
				if (now == m) {
					break;
				}
			}
		}
	}
	int t = cur[id] - 1;
	for (int i = t; i >= 0; i--) {
		int vis = true;
		for (int j = 1; j <= now; j++) {
			if (dg[i][num[j]] == 0) {
				vis = false;
				break;
			}
		}
		if (vis) {
			cur[++id] = i;
		}
	}
	long long ans = 0;
	for (int i = 1; i <= id; i++) {
		ans += d2[cur[i]];
		//cout << cur[i];
	}
	cout << ans << endl;
	return 0;
}
