#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;
long long n , m , a[N] , xr[N] , maxn , mid;

int main() {
	
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		maxn = max(maxn , a[i]);
	}
	for(int i = 1; i <= n; i++) {
		if(a[i] != maxn) mid = max(mid , a[i]);
	}
	xr[1] = a[1];
	for(int i = 2; i <= n; i++) xr[i] = xr[i - 1] & a[i];
	if(m == n) {
		cout << xr[n];
		return 0;
	}
	cout << (maxn & mid);
	return 0;
}

/*
4 2
3 15 12 12
5 3
31 3 1 15 7

*/

// I love CCF! 
// RP++ 
