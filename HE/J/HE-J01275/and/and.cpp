#include<bits/stdc++.h>
using namespace std;
int n, m;
long long a[200005];
long long ans;
bool cmp(int a , int b) {
	return a > b;
}
int main() {
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) {
		cin >> a[i];
	}
	sort(a + 1 , a + 1 + n , cmp);
	ans = a[1] & a[2];
	for(int i = 3;i <= m;i++) {
		ans &= a[i];
	}
	cout << ans << endl;
	return 0;
} 
