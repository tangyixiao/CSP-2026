#include <bits/stdc++.h>
using namespace std;


int n, m;
int ls[500010];

int pre[500010];
int dis[500010];
int ans[500010];

int flag[500010];

int main() {
	freopen("card.in", "w", stdin);
	freopen("card.out", "r", stdout);

	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> ls[i];
//	}
	for (int i = 1; i <= n; i++) {
		cin >> ls[i];
		pre[i] = dis[ls[i]];
		if (!dis[ls[i]])
			dis[ls[i]] = i;

	}

	for (int i = 1; i <= n; i++) {
		ans[ls[i]] += i - pre[i];
	}




//		memset(flag,0,sizeof(0));
//		for (int j = i;j <= i;j++)
//		{
//			for (int k = pre[j];k <=
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		cin >> ls[i];
//		pre[i] = dis[ls[i]];
//		if (!dis[ls[i]])
//			dis[ls[i]] = i;
//
//		ds[i] = ds[i-1] + i;
//
//	int sum = 0;
//	}
//	for (int i = 1; i <= n; i++) {
//		cout << pre[i] << ' ';
//	}
//	for (int i = n; i >= 1; i++) {
//		dp[i] =
//	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}