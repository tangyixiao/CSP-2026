#include <bits/stdc++.h>

using namespace std;

int n, m, a[500005], vis[500005], k[500005];
stack<int> s;

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
		for (int i = 1; i <= n; i++){
			memset(vis, 0, sizeof(vis));
			for (int j = i; j <= n; j++){
				if (!vis[a[i]]){
					s.push(a[i]);
					vis[a[i]] = 1;
				}else{
					while (s.top() != a[i]){
						s.pop();
					}
					s.pop();
					s.push(a[i]);
				}
			}
			while (!s.empty()){
				k[s.top()]++ ;
				s.pop();
			}
			cout << endl;
		}
		for (int i = 1; i <= m; i++){
			cout << k[i] << ' ';
		}
	return 0;
}
