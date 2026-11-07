#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	int a[500010];
	int t[300010]={0},ins[300010]={0};
	bool vis[500010]={0};
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			if(!ins[a[j]]){
				ins[a[j]]++;
			}else{
				for(int k = j-1; k >= i; k--){
					if(vis[k]) continue;
					vis[k] = 1;
					if(a[k]==a[j]) break;
					else ins[a[k]]--;
				}
			}
		}
		for(int j = 1; j <= m; j++){
			t[j] += ins[j];
		}
		memset(ins,0,sizeof(ins));
		memset(vis,0,sizeof(vis));
	}
	for(int i = 1; i <= m; i++){
		cout << t[i] << ' ';
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
