#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e5 + 10;
int n, m;
int a[N];
bool v[N];
int pos[N];
int cnt[N];
signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++) {
		memset(v, 0, sizeof(v));
		for(int j = i; j <= n; j++) {
			if(v[a[j]]) {
				for(int k = pos[a[j]] + 1; k < j; k++) {
					if(v[a[k]]) {
						cnt[a[k]]--;
						v[a[k]] = 0;
					}
				}
				pos[a[j]] = j;
			}
			else {
				pos[a[j]] = j;
				v[a[j]] = 1;
				cnt[a[j]]++;
			}
		}
	}
	for(int i = 1; i <= m; i++) cout << cnt[i] << ' ';
	return 0;
}