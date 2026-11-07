#include<bits/stdc++.h>
using namespace std;
int n,m;
const int MAXN = 500000+10;
const int MAXM = 300000+10;
int a[MAXN];
int mp[MAXN];
int pos[MAXM];
int ans[MAXM];
int main(){
	freopen("card.in", "r",stdin);
	freopen("card.out", "w",stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int len = 0;
	for(int i = 1; i <= n; i++){
		memset(pos,-1,sizeof(pos));
		memset(mp,0,sizeof(mp));
		len = 0;
		for(int j = i;j <= n; j++){
			if(pos[a[j]] == -1){
				mp[++len] = a[j];
				pos[a[j]] = len;
			}else{
				for(int x = pos[a[j]] + 1; x <= len; x++){
					pos[mp[x]] = -1;
					mp[x] = 0;
				}
			}
		}
		for(int k = 1; k <= len; k++){
			ans[mp[k]]++;
		}
	}
	for(int i = 1; i <= m; i++){
		cout << ans[i] << " ";
	}
	return 0;
}
