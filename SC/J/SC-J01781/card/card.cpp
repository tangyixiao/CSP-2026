#include<bits/stdc++.h>
#define LoveCyrene ios :: sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define LoveAnastasya freopen("card.in", "r", stdin)
#define LoveOdette freopen("card.out", "w", stdout)
using namespace std;;
constexpr int N = 5e5 + 9178;
int a[N], ans[N], vis[N], lst[N];

bool A(int n){
	for (int i = 1; i < n; ++i) if(a[i] > a[i + 1]) return 0;
	return 1;
}

void tpa(int n, int m){
	for (int i = 1; i <= n; ++i) lst[a[i]] = i;
	for (int i = 1; i <= m; ++i) cout << lst[i] << " ";
}

void Anastasya(int n, int m){
	if(A(n)){
		tpa(n, m);
		return;
	}
	for (int i = 1; i <= n; ++i){
		vector<int> cur;
		for (int j = 1; j <= m; ++j) vis[j] = 0;
		for (int j = i; j <= n; ++j){
			if(!vis[a[j]]){
				cur.push_back(a[j]);
				vis[a[j]] = 1;
			}
			else{
				while(cur.back() != a[j]){
					vis[cur.back()] = 0;
					cur.pop_back();
				}
			}
		}
		for (int x : cur) ans[x]++; 
	}
	for (int i = 1; i <= m; ++i) cout << ans[i] << " ";
}

signed main(){
	LoveAnastasya;
	LoveOdette;
	LoveCyrene;
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; ++i) cin >> a[i]; 
	Anastasya(n, m);
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/