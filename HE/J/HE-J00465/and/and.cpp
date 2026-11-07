#include <iostream>
#include <algorithm>
using namespace std;
int a[int(1e8)], b[int(1e8)];
bool use[int(1e8)];
long long ans = 0;
int n, m;
void dfs(int p){
	if(p == n){
		long long sum = b[0];
		for(int i = 1; i < m; i++){
			sum = sum & b[i];
		}
		ans = max(sum, ans);
		return;
	}
	for(int i = p; i < n; i++){
		if(use[i] == false){
			b[p] = a[i];
			use[i] = true;
		}
		dfs(p + 1);
		use[p] = false;
	}
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	dfs(0);
	cout << ans;
	return 0;
}
