#include <bits/stdc++.h>
using namespace std;
const int MAXN = 200000;
int arr[MAXN+5];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	sort(arr+1, arr+n+1);
	int ans = arr[n];
	for(int i = n-1; i > n-m; i--){
		ans = ans & arr[i];
	}
	cout << ans;
	return 0;
} 
