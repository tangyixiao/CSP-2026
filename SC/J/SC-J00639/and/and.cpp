#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 10;
long long a[maxn];
bool cmp(long long a, long long b){
	return a > b;
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	long long ans = a[1];
	if(m == 1){
		cout << a[1];
		return 0;
	}
	if(m == n){
		for(int i = 2; i <= n; i++){
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	for(int i = 2; i <= m; i++){
		ans &= a[i];
	}
	cout << ans;
	return 0;
}