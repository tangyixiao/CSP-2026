#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int z[500005];
int cnt[500005];
bool vis[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	for(int num = n;num >= 1;num--){
		memset(z,0,sizeof z);
		int rpos = 0;
		for(int i = n-num+1;i <= n;i++){
			bool flag = true;
			for(int j = 1;j <= rpos;j++){
				if(z[j] == a[i]){
					fill(z+j+1,z+rpos+1,0);
					rpos = j,z[j] = a[i];
					flag = false;
					break;
				}
			}
			if(flag){
				z[++rpos] = a[i];
			}
		}
		fill(vis+1,vis+m+1,1);
		for(int i = 1;i <= rpos;i++){
			cnt[z[i]*vis[z[i]]]++;
			vis[z[i]] = 0;
		}
	}
	for(int i = 1;i <= m;i++){
		cout << cnt[i] << " ";
	}
	return 0;
}
