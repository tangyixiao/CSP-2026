#include<bits/stdc++.h>
using namespace std;
int ans[300005], a[500005], n, m, b[500005];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		if(ans[a[i]] == 0) ans[a[i]] = i;
		else{
			for(int j = i - 1; j >= 1 && a[j] != a[i]; j--){
				if(b[j] < ans[a[i]])ans[a[j]] -= ans[a[i]] - b[j];
				b[j] = max(b[j], ans[a[i]]);
				ans[a[j]] = max(ans[a[j]], 0);
				//a[j] = 0; 
			}
			b[ans[a[i]]] = ans[a[i]];
			ans[a[i]] = i;
		}
//		for(int j = 1; j <= m; j++){
//		cout << ans[j] << ' ';
//		}
//		for(int j = 1; j <= n; j++){
//		cout << b[j] << ' ';
//	}
//		cout << '\n';
		
	}
	for(int i = 1; i <= m; i++){
		cout << ans[i] << ' ';
	}
//	for(int i = 1; i <= n; i++){
//		cout << b[i] << ' ';
//	}
	return 0;
}