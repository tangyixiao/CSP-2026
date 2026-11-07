#include <bits/stdc++.h>
using namespace std;
long long ans;
int n, m, a[200010];
stack<int> t;
bool vis[200010] = {false};
void dfs(int shu,int cen, int i1){
	if (cen == m){
		if (ans < shu){
			ans = shu;
		}
		return;
	}
	if (n - i1 + cen < m){
		return;
	}
	while(!t.empty()){
		int x = t.top();
		for(int i = x + 1; i < n; i++){
			if (vis[i] == false){
				dfs(shu, cen, i1 + 1);
				t.push(i);
				vis[i] = true;
				shu &= a[i];
				dfs(shu, cen + 1, i);
				t.pop();
				vis[i] = false;
				
			}
		}
		break;
		
	}
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	cin >> ans;
	a[0] = ans;
	for(int i = 1; i < n; i++){
		cin >> a[i];
		if (m == 1){
			if (a[i] > ans){
				ans = a[i];
			}
		}else if (m == n){
			ans &= a[i];
		}
	}
	if (m == n || m == 1){
		cout << ans;
	}
	for(int i = 0; i < n; i++){
		t.push(i);
		vis[i] = true;
		dfs(a[i], 1, i);
		t.pop();
	}
	cout << ans;
	return 0;
} 