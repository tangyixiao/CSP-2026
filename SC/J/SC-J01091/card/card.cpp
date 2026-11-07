#include<bits/stdc++.h>
using namespace std;
long long sp[500005], b[500005], s, a[500005], n, m, r, vis[300005], ans[300005];
bool fl = true;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] < a[i - 1]) fl = false;
		sp[a[i]] = i;
	}
	if (fl) {
		for(int i=1;i<=m;i++){
			cout<<sp[i]<<" ";
		}
		return 0;
	}
	if (n <= 5000 && m <= 3000) {
		s = 1;
		while (s <= n) {
			r = 1; //r表示应该插入在哪
			memset(vis, 0, sizeof(vis));
			memset(b, 0, sizeof(b));
			for (int i = 0; i + s <= n; i++) {
				long long pos = i + s;
				if (!vis[a[pos]]) {
					b[r] = a[pos];
					vis[a[pos]] = r;
					r++;
				} else {
					for (int j = vis[a[pos]] + 1; j <= r; j++) {
						vis[b[j]] = 0;
						b[j] = 0;
					}
					r = vis[a[pos]] + 1;
				}
				//cout<<b[1]<<" "<<b[2]<<" "<<b[3]<<" "<<b[4]<<endl;
			}
			for (int i = 1; i <= m; i++) {
				if (vis[i]) ans[i]++;
			}
			//cout<<"######"<<endl;
			s++;
		}
		for (int i = 1; i <= m; i++) {
			cout << ans[i] << " ";
		}
		return 0;
	}

}
/*
10 3
3 1 2 1 3 2 3 1 2 1

4 3
1 2 1 3

*/