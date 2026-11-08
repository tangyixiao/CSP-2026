#include<bits/stdc++.h>
using namespace std;
int n,m,ans[300005],zp[500005],xp[500005],zl;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>zp[i];
	}
	for(int js=1;js<=n;js++){
		zl=1;
		for(int i=js;i<=n;i++){
			for(int j=1;j<zl;j++){
				if(xp[j]==zp[i]){
					zl=j;
					break;
				} 
			}
			xp[zl]=zp[i];
			zl++;
		}
		for(int i=1;i<zl;i++){
			ans[xp[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
