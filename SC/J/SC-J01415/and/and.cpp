#include  <bits/stdc++.h>
using namespace std;
long long ans, m ,n ,a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i]; 
	}
	sort(a+1,a+n+1);
	for (int i = 1;i <= m-1;i++){
		ans = (a[n-i+1] & a[n-i]);
		a[n-i] = ans;
	}
	cout << ans;
	return 0;
}