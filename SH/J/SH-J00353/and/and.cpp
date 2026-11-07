#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, mx = -1;
	bool flag = true;
	cin >> n >> m;
	cin >> a[1];
	for(int i = 2;i <= n;i++){
		cin >> a[i];
		mx = max(a[i], mx);
		if(a[i] != a[i - 1] + 1) flag = false;
	}
	if(flag){
		mx = a[n - m + 1];
		for(int i = n - m + 2;i <= n;i++){
			mx &= a[i];
		}
		cout << mx << endl;
	}else if(m == 1){
		cout << mx << endl;
	}else if(m == 2){
		mx = -1;
		for(int i = 1;i <= n;i++){
			for(int j = i + 1;j <= n;j++){
				mx = max(mx, (a[i] & a[j]));
			}
		}
		cout << mx << endl;
	}else if(m == n){
		mx = a[1];
		for(int i = 2;i <= n;i++){
			mx &= a[i];
		}
		cout << mx << endl;
	}else if(m == n - 1){
		int ans = 0;
		for(int i = 1;i <= n;i++){
			mx = -1;
			for(int j = 1;j <= n;j++){
				if(i == j) continue;
				else mx &= a[j];
			}
			ans = max(ans, mx);
		}
		cout << ans << endl;
	}
	return 0;
}

