#include<bits/stdc++.h>
using namespace std;

int n , m , a[2000001] , ans;

int main(){
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1 , a + n + 1);
	ans = a[n];
	for(int i = n - 1; i >= n + 1 - m; i--){
		ans = ans & a[i];
	}
	cout << ans;
	return 0;
}
