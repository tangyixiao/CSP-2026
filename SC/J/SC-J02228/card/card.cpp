#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e5 + 5, N1 = 3e5 + 5;
int n, m;
int a[N], t[N1], ans[N1];
deque<int> path;
signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	for(int l = 1; l <= n; ++l) {
		for(int i = l; i <= n; ++i) {
			t[a[i]]++;
			if(t[a[i]] == 1) path.push_back(a[i]);
			else {
				t[a[i]] = 1;
				for(int x = path.size() - 1; x >= 0; --x){
					if(!path.empty() && path[x] != a[i]) {
						path.pop_back();
						t[path[x]]--;
					}
					else break; 
				}
			}
		}
		for(auto x : path) {
			ans[x]++;
		}
		path.clear();
	}
	
	for(int i = 1; i <= m; ++i) cout << ans[i] << ' ';
	return 0;
}