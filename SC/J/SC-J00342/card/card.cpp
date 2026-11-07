#include<bits/stdc++.h>
#define int long long
using namespace std;

int n, m;
int a[500005];
//bool is_here[300005];
int ans[300005];


signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	
	for (int i = 0; i < n; ++i) cin >> a[i];
	for (int j = 0; j < n; ++j){
		
		vector<int> v;
		bool is_here[300005] = {0};
		
		for (int i = j; i < n; ++i) {
		
			v.push_back(a[i]);
		
			if (is_here[v.back()]) {
				v.pop_back();
				while(v.back() != a[i]){
					is_here[v.back()] = 0;
					v.pop_back();
				} 
			} else is_here[v.back()] = 1;
			
		
		}
		//cout << '\n';
		for (auto i : v) ans[i] ++;
		
	}
	
	for (int i = 1; i <= m; ++i) cout << ans[i] << ' ';
	return 0;
}