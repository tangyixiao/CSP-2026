#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
const int M = 3e5 + 10;
int a[N], p[M], fa[N], ans[M];
int l = 0;
int n, m;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = n;i >= 1;i--){
		fa[i] = p[a[i]];
		if(p[a[i]] == 0)
			p[a[i]] = i;
	}
	for(int i = 1;i <= n;i++){
		queue<int> q;
		int nw = i;
		while(nw <= n){
			while(fa[nw] != 0)
				nw = fa[nw];
			q.push(a[nw]);
			nw++;
		}
		while(!q.empty())
			ans[q.front()]++, q.pop();
	}
	for(int i = 1;i <= m;i++)
		cout << ans[i] << ' ';
	return 0;
}