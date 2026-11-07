#include<bits/stdc++.h>
#define int long long

using namespace std;
int n, m;
int a[200010];
bool t[200010][35];
bool vis[200010];

void f(int id, int num){//预处理二进制 
	int i = 0;
	while(num){
		if(num & 1){
			t[id][++ i] = 1;
		}else{
			t[id][++ i] = 0;
		}
		num /= 2;
	}
}

signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	set<int> st;
	for(int i = 1;i <= n;i ++){
		cin >> a[i]; 
		f(i, a[i]);//算二进制
	}
	
	bool is_xz = false;
	for(int i = 31;i >= 1;i --){
		int cnt = 0;
		vector<int> erz;
		for(int j = 1;j <= n;j ++){
			if(vis[j]) continue; 
			if(t[j][i]) cnt ++;
			else erz.push_back(j);
		}
		if(cnt >= m){
			for(int j : erz) vis[j] = true;
			is_xz = true;
		}
		if(cnt < m){
			if(is_xz) break;
		}
		
	}
	
	int ans = (1ll << 32) - 1;
	for(int i = 1;i <= n;i ++){
		if(!vis[i]) ans = ans & a[i];
	}
	cout << ans;
	return 0;
}