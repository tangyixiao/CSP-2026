#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int n,m;
int a[N];
bool vis[M];
int ans[M];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1; i<=n; i++) {
		cin >> a[i];
	}
	for(int i=1; i<=n; i++) {
		stack<int> s;
		for(int j=i; j<=n; j++) {
			if(vis[a[j]]) {
				while(s.top()!=a[j]) {
					vis[s.top()]=0;
					s.pop();
				}
			} else {
				s.push(a[j]);
				vis[a[j]]=1;
			}
		}
		for(int j=1; j<=m; j++) {
			if(vis[j]) ans[j]++;
		}
	}
	for(int i=1; i<=m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
