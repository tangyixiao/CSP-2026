#include<bits/stdc++.h>
using namespace std;

const int N = 5e5 + 10;
int n, m, a[N];

int Pos[N];

void solve1(){
	bool vis[6000];
	int ans[6000];
	for(int i = 1; i <= m; ++i) vis[i] = false;
	vector<int>v;
	for(int i = 1; i <= n; ++i){
		v.clear(); // 清空
		for(int i = 1; i <= m; ++i) vis[i] = false;
		
		for(int j = i; j <= n; ++j){ // 模拟
			if(vis[a[j]] == true){
				while(v.back() != a[j]){ 
					vis[v.back()] = false;
					v.pop_back();
				}
			}
			else{
				vis[a[j]] = true;
				v.push_back(a[j]);
			}
		}
		
		for(int j : v) ans[j]++;
	}
	for(int i = 1; i <= m; ++i) cout << ans[i] << " ";
}

void solve2(){ // 特殊性质 A
	for(int i = 1; i <= n; ++i) Pos[a[i]] = i;
	
	for(int i = 1; i <= m; ++i){
		cout << Pos[i] << " ";
	}
}

int main(){
	
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	bool add = true; // 递增
	
	cin >> n >> m;
	for(int i = 1; i <= n; ++i){ 
		cin >> a[i];
		if(a[i] < a[i - 1]) add = false;
	}
	
	if(n <= 5000 && m <= 5000){
		solve1();
		return 0;
	}
	if(add){
		solve2();
		return 0;
	}
	return 0;
}
/*

预估 50

T4

直接模拟 O(nm)

想出特殊性质 A 的做法



*/