#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],vis[300005],ans[300005],lst[500005],f;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	for(int r = 1;r <= n;r++){
		for(int i = 1;i <= n;i++) vis[i] = lst[i] = 0;
		for(int i = r;i <= n;i++){
			f = 0;
			for(int j = 1;j <= i;j++){
				if(lst[j] == a[i] || f){
					lst[j] = -1;
					f = 1;
				}
			}
			lst[i] = a[i];
		}
		for(int i = r;i <= n;i++){
			if(lst[i] == -1) continue;
			if(!vis[lst[i]]) ans[lst[i]]++;
			vis[lst[i]] = 1;
		}
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
