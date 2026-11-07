#include <bits/stdc++.h>
using namespace std;
int n,m;
long long ans;
long long a[200007];
bool cmp(long long x ,long long y){
	return x > y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	if(m == n){
		cin >> ans;
		for(int i = 1 ;i < n ;i ++){
			cin >> a[i];
			ans = ans&a[i];
		}
		cout << ans;
	}
	else if(m == 1){
		for(int i = 1 ;i <= n ;i ++){
			cin >> a[i];
			ans = max(ans , a[i]);
		}
		cout << ans;
	}
	else{
		for(int i = 1 ;i <= n ;i ++){
			cin >> a[i];
		}
		sort(a + 1 , a + n + 1, cmp);
		ans= a[1];
		for(int i = 2 ;i <= m ;i ++){
			ans = ans & a[i];
		}
		cout << ans;
	}
}
