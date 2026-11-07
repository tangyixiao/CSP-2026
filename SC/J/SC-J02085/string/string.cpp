#include<bits/stdc++.h>
using namespace std;
long long n, a[200005], m, l = 1, r, ans;
char c[200005];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[i]; 
		m += a[i];
	} 
	r = n;
	while(l < r){
		if(a[l] > a[r]){
			if(c[l] == c[r]) a[l] -= a[r], r--;
			else a[l] -= a[r], ans += a[r], r--;
		}else if(a[l] == a[r]){
			if(c[l] == c[r]) r--, l++;
			else ans += a[r], r--, l++;
		}else{
			if(c[l] == c[r]) a[r] -= a[l], l++;
			else a[r] -= a[l], ans += a[l], l++;
		}
	}
	cout << ans;
	return 0;
}