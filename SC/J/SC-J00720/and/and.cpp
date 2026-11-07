#include<bits/stdc++.h>
using namespace std;
int n , m , a[200010] , ans , b;
int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n - m; j++){
			for(int x = 1; x < m; x++){
				b = b & a[j + x] & a[j + x + 1];
			}
		}
		ans = max(ans , b);
		b = a[i];
	}
	cout << ans;
	return 0;
} 