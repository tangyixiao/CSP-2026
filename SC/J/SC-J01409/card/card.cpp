#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
int n, m, a[N], b[N], ans[N];
int Lidx[N];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	int id = 1;
	for(int i = 1; i<=n; i++) Lidx[i] = INT_MAX;
	for(int i = 1; i<=n; i++) cin >> a[i];
	for(int i = 1; i<=n; i++){
		id = 1;
		for(int j = i; j<=n; j++){
			if(id < Lidx[a[j]]){
				b[id] = a[j];
				Lidx[a[j]] = id;
				id++;
			}else{
				id = Lidx[a[j]];
				Lidx[a[j]] = id+1;
			}
		}
		for(int k = 1; k<=id; k++) ans[b[k]]++;
	}
	for(int i = 1; i<=m; i++) cout << ans[i] << ' ';
	return 0;
}