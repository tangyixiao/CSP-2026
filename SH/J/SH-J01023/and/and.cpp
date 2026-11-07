#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("and.in", "r",stdin);
	freopen("and.out", "w",stdout);
	int n, m;
	cin >> n >> m;
	
	vector<int> a(n);
	for(int i = 0; i < n; i ++) {
		cin >> a[i]; 
	} 
	sort(a.begin(),a.end());	
	if(m == 1) {
		cout << a[n - 1];
		return 0;
	}
	int ans = a[n - 1];
	for(int i = 1; i < m; i ++) {
		ans &= 	a[n - 1 - i];
	} 
	cout << ans;
	return 0;
}
