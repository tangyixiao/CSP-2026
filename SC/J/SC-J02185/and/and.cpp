#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out", "w", stdout);
	int n, m; cin >> n >> m;
	vector<long long> a[32]; long long mx = 0, tmp;
	for (int i = 0; i < n; i++){
		cin >> tmp;
		if (tmp == 0) a[0].push_back(0);
		else a[int(log2(tmp))].emplace_back(tmp);
	} 
	for (int i = 1; i < 32; i++) sort(a[i].begin(),a[i].end(),greater<>());
	for (int i = 31; i >= 1; i--){
		if (a[i].size() >= m){
			mx = a[i][0];
			for (int j = 1; j < m; j++) mx &= a[i][j];
			break;
		}
	}
	if (!mx) {
		int f = 0, lev = 31; bool first = true;
		while (f < m){
			for (int j = 0; j < a[lev].size() && f < m; j++){
				if (first) mx = a[lev][j];
				else mx &= a[lev][j]; 
				f++;
			}
			lev--;
		}
	}
	cout << mx;
	return 0;
}