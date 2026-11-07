#include <iostream>
#include <string.h>
#include <cstdio>
#include <vector>
using namespace std;
const int maxn = 5e5 + 5;
const int maxm = 3e5 + 5;
int n, m, a[maxn], cnt[maxn];
int ans[maxm];
vector<int> g[maxn];
inline void solve1(){
	for(int i = 1; i <= n; i++) ans[a[i]] = max(ans[a[i]], i);
	for(int i = 1; i <= m; i++) cout << ans[i] << ' ';
	cout << '\n';
	exit(0);
}
int stk[maxn], top = 0, vst[maxm];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m;
	bool flag1 = true;
	for(int i = 1; i <= n; i++){
		cin >> a[i], cnt[a[i]]++;
		g[a[i]].push_back(i);
		if(a[i] > a[n]) flag1 = false;
	}
	
	if(flag1) solve1();
	
	for(int i = 1; i <= n; i++){
		memset(vst, 0, sizeof(vst));
		memset(stk, 0, sizeof(stk));
		top = 0;
		for(int j = i; j <= n; j++){
			if(vst[a[j]]){
				while(stk[top] != a[j]) vst[stk[top]]--, top--;
			}else stk[++top] = a[j], vst[a[j]]++;
		}
		
//		for(int i = 1; i <= top; i++) cout << stk[i] << ' ';
//		cout << '\n';
		
		for(int i = 1; i <= m; i++){
			if(vst[i]) ans[i]++;
		}
	}
	
	for(int i = 1; i <= m; i++) cout << ans[i] << ' ';
	cout << '\n';
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
