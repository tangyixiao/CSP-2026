#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n,m;
	cin >> n >> m;
	
	
	if(m == n){
		long long ai;
		cin >> ai;
		long long ans = ai;
		for (int i = 1;i < n;i ++){
			cin >> ai;
			ans &= ai;
		}
		cout << ans;
		return 0;
	}
	if(m == 1){
		long long maxv = -1;
		long long ai;
		for (int i = 1;i <= n;i ++){
			cin >> ai;
			maxv = max(maxv,ai);
		}
		cout << maxv;
		return 0;
	}
	if(m == 2){
		for (int i = 1;i <= n;i ++){
			cin >> a[i];
		}
		long long ans = -1;
		for (int i = 1;i <= n;i ++){
			for (int j = i + 1;j <= n;j ++){
				ans = max(ans,a[i]&a[j]);
			}
		}
		cout << ans;
		return 0;
	}
	if(m == n - 1){
		long long ai;
		cin >> ai;
		long long s = ai;
		a[1] = ai;
		for (int i = 2;i <= n;i ++){
			cin >> ai;
			s &= ai;
		}
		long long ans = -1;
		for (int i = 1;i <= n;i ++){
			ans = max(ans,s & a[i]);
		}
		cout << ans;
		return 0;
	}
	if(m == 3){
		for (int i = 1;i <= n;i ++){
			cin >> a[i];
		}
		long long ans = -1;
		for (int i = 1;i <= n;i ++){
			for (int j = i + 1;j <= n;j ++){
				for (int k = j + 1;k <= n;k ++){
					ans = max(ans,a[i]&a[j]&a[k]);
				}
			}
		}
		cout << ans;
		return 0;
	}
	return 0;
}