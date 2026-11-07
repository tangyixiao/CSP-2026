#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010],ans[500010],b[500010];
bool vis[300010];
int main() { 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) {
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++) {
		memset(b,0,sizeof(b));
		int cnt = 0;
		memset(vis,false,sizeof(vis));
		for(int j = i;j <= n;j++) {
			if(vis[a[j]]) {
				for(int k = cnt;k >= 1 && b[k] != a[j];k--) {
					vis[b[k]] = false;
					cnt--;
				}
			} else {
				b[++cnt] = a[j];
				vis[a[j]] = true;
			}
		}
		for(int j = 1;j <= m;j++) {
			if(vis[j]) {
				ans[j]++;
			}
		}
	}
	for(int i = 1;i <= m;i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}
