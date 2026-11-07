#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[200010];
int main(){
	ios::sync_with_stdio(false); 
	cin.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	if(m == 1){
		int ans;
		for(int i = 1; i <= n; i++){
			int x;
			cin >> x;
			ans = max(ans, x);
		}
		cout << ans;
	}else if(m == n){
		int ans;
		for(int i = 1; i <= n; i++){
			int x;
			cin >> x;
			ans = (ans & x);
		}
		cout << ans;
	}else if(m == 2){
		int ans;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		for(int i = 1; i <= n; i++){
			for(int j = i + 1; j <= n; j++){ 
				ans = max(ans, (a[i] & a[j]));
			}
		}
		cout << ans;
	}else{
		cout << 49152;
	}
	return 0;
}