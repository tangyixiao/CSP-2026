#include <bits/stdc++.h> //±©Á¦ 
using namespace std;
int n,m;
int a[500010];
int ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
	}
	
	for(int i = 1;i<=n;i++){
		
		int vis[300010] = {0};
		int lst[300010] = {0};
		
		for(int j = i;j<=n;j++){
			if(vis[a[j]]==0){
				vis[a[j]] = 1;
				lst[a[j]] = j;
			}
			else{
				for(int k = lst[a[j]];k<j;k++){
					vis[a[k]] = 0;
					lst[a[k]] = 0;
				}
				vis[a[j]] = 1;
				lst[a[j]] = j;
			}
		}
		
		for(int j = 1;j<=m;j++){
			if(vis[j]) ans[j]++;
		}
	}
	
	for(int i = 1;i<=m;i++){
		cout << ans[i] << ' ';
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
