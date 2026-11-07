#include <bits/stdc++.h>
using namespace std;
int a[200005];

int main(){ 
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);

	int n,m;
	cin >> n >> m;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	sort(a + 1, a + 1 + n, greater<int>());
	
	long long ans = 0;
	for(int i = 1; i <= m; ++i){
		if(i == 1) ans = a[i]; 
		else ans &= a[i];
	}
	
	cout << ans;
	
    return 0;
}