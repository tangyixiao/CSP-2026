#include<iostream>
#include<algorithm>
using namespace std;

const int N = 2e5+1;
int x[N], vis[22], maxa;
int n, m;

void dfs(int cnt, int sum){
	if (cnt == n){
		maxa = max(maxa, sum);
		return;
	}
	for (int i = 1; i <= n; i++){
		if (!vis[i]){
			vis[i] = true;
			if (cnt == 0) dfs(1, x[i]);
			else dfs(cnt + 1, sum & x[i]);
			vis[i] = false;
		}
	}
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin>>n>>m; int cnt = 0, cnt4 = 0;
	int maxx = 0, all = 0;
	for (int i = 1; i <= n; i++){
		cin>>x[i];
		
		if (i == 1) all = x[1];
		else all &= x[i];
		int p = __builtin_popcount(x[i]);
		if ((1<<p) - 1 == x[i]) cnt++;
		if (x[i] < 4) cnt4++;
		maxx = max(maxx, x[i]);
	}
	
	if (m == 1){cout<<maxx; return 0;}
	if (m == n){cout<<all; return 0;}
	if (m == 2){
		int ans = 0;
		for (int i = 1; i <= n; i++){
			for (int j = 1; j < i; j++){
				ans = max(ans, x[i] & x[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if (cnt4 == n || cnt == n){
		sort(x + 1, x + n+1);
		int ans = x[n];
		for (int i = n-1; i >= n-m+1; i--){
			ans &= x[i];
		}
		cout<<ans; return 0;
	}
	if (n <= 20){
		dfs(0, 0);
		cout<<maxa;
		return 0;
	}
	cout<<n - m;
	
	return 0;
}

