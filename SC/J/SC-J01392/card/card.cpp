#include<bits/stdc++.h>
#define int long long
using namespace std;
const int M = 5e5 + 2;
int a[M];
map<int, int> ans;
signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin.tie(0) -> sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i ++){
		map<int, bool> t;
		map<int, bool> flag;
		vector<int> st(M >> 1, 0);
		int lth = 0;
		for(int j = i; j <= n; j ++){
			int nw = a[j];
			if(flag[nw]) continue;
			if(t[nw]){
				while(lth >= 0){
					if(st[lth] == nw) break;
					lth --;
				}
				flag[nw] = 1;
			} else {
				t[nw] = 1;
				st[++ lth] = nw;
			}
		}
		for(int nw = 1; nw <= lth; nw ++) ans[st[nw]] ++;
	}
	for(int i = 1; i <= m; i ++){
		cout << ans[i] << ' ';
	}
}
/*
10 3 
2 3 1 2 1 3 2 3 1 2 1
*/