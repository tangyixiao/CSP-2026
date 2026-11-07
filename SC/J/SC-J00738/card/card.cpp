#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, a[500005], t[300005], j = 1, ans = 0;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){	
		cin >> a[i];
		t[i] = i;
	} 
	if(n == m) {
		for(int i = 1; i <= n; i++){
			cout << i << " ";
		}
	}
	else {
		for(int i = 1; i <= n; i++){
			if(a[i + 1] != a[i]) {
				j++;
			}
			else {
				ans++;
			}
			t[j] += ans;
//			cout << t[j] << " " << j << " " << ans << endl;
		}
		for(int i = 1; i <= m; i++){
			cout << t[i] << " ";
		}
	}
	return 0;
}