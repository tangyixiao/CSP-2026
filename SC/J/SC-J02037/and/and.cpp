#include<bits/stdc++.h>
using namespace std;
vector<bool> vis;
vector<int> a;
int n,m,ans;
void dfs(int idx,int siz,int mx){
	if(!mx || mx <= ans){
		return;
	}
	if(siz >= m){
		ans = max(ans,mx);
		return;
	}
	for(int i = 1;i <= n;i++){
		if(vis[i] == false){
			vis[i] = true;
			dfs(i,siz + 1,mx & a[i]);
			vis[i] = false;
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	a.resize(n + 1);
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	if(m == 1){
		int mx = INT_MIN;
		for(int i = 1;i <= n;i++){
			mx = max(mx,a[i]);
		}
		cout << mx;
		return 0;
	}
	else if(m == n){
		int sum = INT_MAX;
		for(int i = 1;i <= n;i++){
			sum &= a[i];
		}
		cout << sum;
		return 0;
	}
	else if(m == 2){
		int mx = 0;
		for(int i = 1;i <= n;i++){
			for(int j = i + 1;j <= n;j++){
				mx = max(mx,a[i] & a[j]);
			}
		}
		cout << mx;
		return 0;
	}
	else if(m == n - 1){
		int mx = 0;
		for(int i = 1;i <= n;i++){
			int sum = INT_MAX;
			for(int j = 1;j <= n;j++){
				if(j == i){
					continue;
				}
				sum &= a[j];
			}
			mx = max(mx,sum);
		}
		cout << mx;
		return 0;
	}
	bool found = false;
	vector<long long> p2(31);
	p2[0] = 1;
	for(int i = 1;i <= n;i++){
		p2[i] = p2[i - 1] * 2;
	}
	for(int i = 1;i <= n;i++){
		if(a[i] != p2[i] - 1){
			found = true;
			break;
		}
	}
	if(found == false){
		sort(a.begin() + 1,a.end(),greater<int>());
		int ans = INT_MAX;
		for(int i = 1;i <= m;i++){
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	else{
		vis.resize(n + 1,false);
		dfs(0,0,INT_MAX);
		cout << ans;
		return 0;
	}
	return 0;
}