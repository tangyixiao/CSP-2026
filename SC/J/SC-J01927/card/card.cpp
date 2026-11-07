#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<string>
using namespace std;
int n, m;
int a[100005], c[100005], ans[100005];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		ans[a[i]]++;
	}
//	for (int i = 1; i <= n; i++) {
//		int b[1000005], cnt = 0;
//		for (int j = i; j <= n; j++) {
//			bool flag = 0;
//			for (int k = 1; k <= cnt; k++) {
//				if (b[k] == a[j]) {
//					cnt = k;
//					b[cnt] = a[j];
//					flag = 1;
//					break;
//				}
//			}
//			if (!flag) {
//				b[++cnt] = a[j];
//				cout<<b[cnt];
//			}
//		}
//		int siz = unique(b + 1, b + 1 + cnt) - (b + 1);
//		for (int i = 1; i <= siz; i++) {
//			cout << i << ' ';
//			c[i]++;
//		}
//		cout << '\n';
//	}
	for (int i = 1; i <= m; i++) {
		cout << ans[a[i]] << ' ';
	}
	return 0;
}