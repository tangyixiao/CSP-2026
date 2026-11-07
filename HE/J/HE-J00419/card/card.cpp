#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10; 
int n,m,a[N],ans[N],vis[N];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	for(int i = 1;i <= n;i++) {
		memset(vis,0,sizeof(vis));
		stack<int> stk;
		for(int j = i;j <= n;j++) {
			if(!vis[a[j]]) {
				stk.push(a[j]);
				vis[a[j]] = 1;
			}
			else {
				while(!stk.empty()&&vis[a[j]]) {
					int u = stk.top();
					stk.pop();
					vis[u] = 0;
				}
				stk.push(a[j]);
				vis[a[j]] = 1;
			}
		}
		while(!stk.empty()) {
			int u = stk.top();stk.pop();
			ans[u]++;
		}
	}
	for(int i = 1;i <= m;i++) cout << ans[i] << ' ';
	return 0;
}
