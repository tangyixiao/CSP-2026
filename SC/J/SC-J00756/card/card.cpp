#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int n,m,ax[N],bx[N],cx[N],ans[N],flag[N];
set<int> a;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>ax[i];
	}
	for(int i=1;i<=m;i++){
		int id=0;
		memset(bx,0,sizeof(bx));
		memset(cx,0,sizeof(cx));
		for(int j=i;j<=n;j++){
			if(a.count(ax[j])){	
				for(int k=bx[ax[j]];k<=id;k++){
					a.erase(cx[k]);
				}id=bx[ax[j]]-1;
			}
			a.insert(ax[j]);
			bx[ax[j]]=++id;
			cx[id]=ax[j];
		}
		for(int u=1;u<=id;u++){
			ans[cx[u]]++;
		}
	}
	for(int i=1;i<=n;i++){
		if(flag[ax[i]]==0){
			cout<<ans[ax[i]]<<" ";
			flag[ax[i]]=1;
		}
	}
	return 0;
}