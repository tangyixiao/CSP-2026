#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const int N = 2e5 + 5;
int n,m;
ull a[N],ans;
void dfs(ull st,ull j,ull sum){
	if(st >= m){
		ans = max(ans,sum);
		return ;
	}
	for(int i = j + 1;i <= n - m + st + 1;i++){
		dfs(st + 1,i,sum & a[i]);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	if(m == 1){
		for(int i = 1;i <= n;i++){
			ans = max(ans,a[i]);
		}
		cout << ans;
		return 0;
	}else if(m == 2){
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n && j != i;j++){
				ans = max(ans,a[i] & a[j]);
			}
		}
		cout << ans;
		return 0;
	}
	if(m == n){
		ans = a[1];
		for(int i = 2;i <= n;i++){
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	if(n > 2000){
		if(m == n - 1){
			ull sum = a[1];
			for(int i = 2;i <= n;i++){
				sum &= a[i];
			}
			ans = sum;
			for(int i = 1;i <= n;i++){
				ans = max(ans,sum & a[i]);
			}
			cout << ans;
			return 0;
		}
	}
	for(int i = 1;i <= n;i++){
		dfs(1,1,a[i]);
	}
	cout << ans;
	return 0;
}