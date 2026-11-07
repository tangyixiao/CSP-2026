#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;
int n , a[N] , ans = 0;char c[N];
signed main(){
	ios::sync_with_stdio(0) , cin.tie(0);
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	cin >> n;int l = 1 , r = n;
	for(int i = 1; i <= n; i ++)cin >> a[i] >> c[i];
	while(l < r){
		while(a[l] <= a[r] && l < r){
			if(c[l] != c[r])ans += a[l];
			a[r] -= a[l] , l ++;
		}while(a[l] >= a[r] && l < r){
			if(c[l] != c[r])ans += a[r];
			a[l] -= a[r] , r --;
		}
	}cout << ans;return 0;
}