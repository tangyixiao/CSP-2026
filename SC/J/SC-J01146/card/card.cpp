#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5, M = 3e5 + 5;
int n, m;
int a[N];
int pos[M];
int vis[M];
int ans[M];
stack<int>st;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = n; i >= 1; i--){
		memset(vis, 0, sizeof vis);
		memset(pos, 0, sizeof pos);
		while(st.size()) st.pop();
		for(int j = i; j <= n; j++){
			vis[a[j]]++;
			if(pos[a[j]] != 0){
				while(st.top() != a[j]){
					pos[st.top()] = 0;
					vis[st.top()]--;
					st.pop();
				}
				pos[st.top()] = 0;
				vis[st.top()]--;
				st.pop();
			}
			st.push(a[j]);
			pos[a[j]] = j;
		}
		for(int j = 1; j <= m; j++) ans[j] += vis[j];
	}
	for(int i = 1; i <= m; i++) cout << ans[i] << " ";
	return 0;
} 