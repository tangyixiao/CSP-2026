#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10, M = 3e5 + 10;
long long n, m, ans[M], a[N];
vector<int>fa[M];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if(n > 500) {
		for(int i = 1; i <= n; i++) {
			ans[a[i]]++;
		}
		for(int i = 1; i <= m; i++) {
			ans[i] += ans[i - 1]; 
			cout << ans[i] << ' ';
		}
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			fa[j].clear();
		}
		fa[a[i]].push_back(-1);
		for(int j = i + 1; j <= n; j++) {
			if(fa[a[j]].size()) {
				for(int k = 1; k <= m; k++) {
					for(auto p:fa[k]) {
						if(p == a[j]) {
							fa[k].clear();
							break;
						}
					}
				}
			}
			else {
				fa[a[j]].push_back(a[j - 1]);
				for(auto k:fa[a[j - 1]]) {
					fa[a[j]].push_back(k);
				}
			}	
		}
		for(int j = 1; j <= m; j++) {
			if(fa[j].size())ans[j]++;
		}
	}
	for(int i = 1; i <= m; i++) {
		
		cout << ans[i] << ' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
