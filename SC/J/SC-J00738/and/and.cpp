#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, a[200005], mx = -1e9;
ll yz = 0;
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	if(m == 1) cout << a[n];
	else if(m == n) {
		yz = a[1] & a[2];
		for(int i = 3; i <= n; i++){
			yz &= a[i];
		}
		cout << yz;
	}
	else {
		for(int i = 1; i <= n; i++){
			for(int j = i + 1; j <= n; j++){
				yz = a[i] & a[j];
//				cout << a[i] << " " << a[j] << " " << yz << endl;
				mx = max(yz, mx);
			}
		}
		cout << mx;
	}
	
	return 0;
}