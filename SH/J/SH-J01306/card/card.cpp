#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5+5;
int n,m,a[maxn],last[maxn],ton[maxn];
bool tnt[maxn];
bool vis[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	for(int t = 1;t <= n;t++){
		memset(tnt,0,sizeof(tnt));
		memset(vis,1,sizeof(vis));
		memset(last,0,sizeof(last));
		for(int i = t;i <= n;i++){
			if(last[a[i]] != 0){
				for(int j = last[a[i]];j < i;j++) {
					vis[j] = 0;
					if(last[a[j]] == j)	last[a[j]] = 0;
				}
			}
			last[a[i]] = i;
		}
		for(int i = t;i <= n;i++){
			if(vis[i]){
				tnt[a[i]]++;
			}
		}
		for(int i = 1;i <= m;i++){
			if(tnt[i]) ton[i]++;
		}
	}
	for(int i = 1;i <= m;i++) cout << ton[i] << ' ';
	return 0;
} 
