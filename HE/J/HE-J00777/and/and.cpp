#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
long long ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		ans = max(ans,a[i]);
	}
	
	if(m == 1){
		cout << ans;
		return 0;
	}
	
	ans = 0;
	for(int i = 1;i <= n;i++){
		for(int j = i + 1;j <= n;j++){
			ans = max(ans ,(a[i] & a[j]));
		}
	}
	if(m == 2){
		cout << ans;
		return 0; 
	}
	
	ans = 0;
	long long sum;
	for(int i = 1;i <= n;i++){
		sum = a[i+1];
		for(int j = 1;j <= n;j++){
			if(i == j){
				continue;
			}
			sum &= a[j];
		}
		ans = max(ans ,sum);
	}
	if(m == n - 1){
		cout << ans;
		return 0;
	}
	
	ans = 0;
	int cnt = 0;
	sort(a+1,a+n+1);
	ans = a[n];
	for(int i = n;i >= 1;i--){
		if(a[i] & 1 == 1){
			ans &= a[i];
			cnt++;
		}
		if(cnt == m){
			break;
		}
	}
	cout << ans;
	return 0;
}
