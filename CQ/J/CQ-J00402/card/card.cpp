#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
int a[N];
int l[N];
int n, m;
int id[N];
int diff[N];
bool vis[N];
bool vis2[N];
int ans[N];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		l[i] = id[a[i]];
		id[a[i]] = i;
	}
	for(int i = 1; i <= n; i++) {
		for(int j = i; j <= n; j++) {
			if(!vis[l[j]] && l[j] != 0 && l[j] >= i) {
				for(int k = l[j]; k <= j - 1; k++) {
					vis[k] = 1;
				}
			}
		}
		for(int j = i; j <= n; j++) {
			if(!vis[j]) vis2[a[j]] = 1;
		}
		for(int j = 1; j <= m; j++) {
			ans[j] += vis2[j];
		}
		for(int j = 0; j <= n; j++) vis[j] = 0;
		for(int j = 0; j <= m; j++) vis2[j] = 0;
	}
	for(int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
}
