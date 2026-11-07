#include <bits/stdc++.h>
using namespace std;
int n, m, maxk, a[200010];
bool use[200010];
void dfs(int p, int k){
	if(p == m){
		maxk = max(maxk, k);
		return;
	}
	for(int i = 1; i <= n; i++){
		if(use[i] == 1){
			continue;
		}
		int b = a[i] & k;
		use[i] = 1;
		dfs(p + 1, b);
		use[i] = 0;
	}
	return;
} 
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		use[i] = 1;
		dfs(1, a[i]);
		use[i] = 0;
	}
	cout << maxk;
	return 0;
} 
