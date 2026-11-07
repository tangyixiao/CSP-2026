#include<bits/stdc++.h>
using namespace std;
const int M = 3e5 + 5;
const int N = 5e5 + 5;
int n,m;
int a[N];
int vis[M],ans[M];
bool shan[N];
int main(){
	
	freopen("card.in", "r", stdin);
	freopen("card.out", "w",stdout);
	
	cin >> n >> m;
	for(int i = n;i >= 1;i--){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		if(vis[i] != 0){
			for(int j = vis[a[i]];j < i;j++){
				if(vis[a[j]] != 0 && shan[j] == 0){
					ans[a[j]] += i - vis[a[j]];
					vis[a[j]] = 0;
					shan[j] = 1;
				}
			}
		}
		vis[a[i]] = i;
	}
	for(int i = 1;i <= m;i++){
		if(vis[i] != 0) ans[i] += n + 1 - vis[i];
		cout << ans[i] << ' ';
	} 
	return 0;
}