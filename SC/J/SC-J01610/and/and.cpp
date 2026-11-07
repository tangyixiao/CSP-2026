#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[2010];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	if(m == 1){
		int maxx = -1e9;
		for(int i = 1; i <= n; i++){
			maxx = max(maxx, a[i]);
		}
		cout << maxx;
	}else if(m == n){
		int ans = a[1];
		for(int i = 2; i <= n; i++){
			ans &= a[i];
		}
		cout << ans;
	}else if(m == 2){
		int maxxans = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(i == j){
					continue;
				}
				int an = a[i] & a[j];
				maxxans = max(maxxans, an);
			}
		}
		cout << maxxans;
	}
	
	
	return 0;
}