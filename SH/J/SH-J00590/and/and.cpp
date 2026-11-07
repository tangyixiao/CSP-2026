#include<bits/stdc++.h>
using namespace std;
int n,m,ans=-1;
int a[200100],da[200100];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if(m==1) {
		for(int i = 1; i <= n; i++) {
			ans = max(ans,a[i]);
		}
		cout << ans;
	}
	else if(m==n) {
		for(int i = 1; i <= n; i++) {
			ans = ans & a[i];
		}
		cout << ans;
	}
	else if(n <= 2000 && m == 2) {
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				if(j == i) {
					continue;
				}
				ans = max(ans,a[j] & a[i]);
			}
		}
		cout << ans;
	}
	else if(n - m == 1) {
		int temp = pow(2,30) -1;
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				if(i != j) {
					temp = temp & a[i];
				}
			}
			ans = max(ans,temp);
		}
		cout << ans;
	}
	else if(n == 2) {
		cout << max(a[1],a[2]);
	}
	else if(n == 3) {
		if(m == 2) {
			ans = max(a[1] & a[2],ans);
			ans = max(a[1] & a[3],ans);
			ans = max(a[3] & a[2],ans);
		}
		else {
			ans = max(a[1],a[2]);
			ans = max(a[3],ans);
		}
		cout << ans;
	}
	else if(n == 4) {
		if(m == 2) {
			ans = max(a[1] & a[2],ans);
			ans = max(a[1] & a[3],ans);
			ans = max(a[3] & a[2],ans);
			ans = max(a[1] & a[4],ans);
			ans = max(a[4] & a[3],ans);
			ans = max(a[4] & a[2],ans);
		}
		else if(m == 3){
			ans = max(a[1] & a[2] & a[3],ans);
			ans = max(a[1] & a[2] & a[4],ans);
			ans = max(a[3] & a[2] & a[4],ans);
			ans = max(a[1] & a[4] & a[3],ans);
		}
		else {
			ans = max(a[1],a[2]);
			ans = max(a[3],ans);
			ans = max(a[4],ans);
		}
		cout << ans;
	}
	else {
		cout << pow(2,30) * 13;
	}
	return 0;
}

